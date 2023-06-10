// Definição da classe Pilha
class Pilha<T> {
    private elementos: T[];
  
    constructor() {
      this.elementos = [];
    }
  
    isEmpty(): boolean {
      return this.elementos.length === 0;
    }
  
    push(elemento: T): void {
      this.elementos.push(elemento);
    }
  
    pop(): T | undefined {
      if (this.isEmpty()) {
        return undefined;
      }
  
      return this.elementos.pop();
    }
  
    peek(): T | undefined {
      if (this.isEmpty()) {
        return undefined;
      }
  
      return this.elementos[this.elementos.length - 1];
    }
  
    size(): number {
      return this.elementos.length;
    }
  
    print(): void {
      if (this.isEmpty()) {
        console.log('A pilha está vazia.');
      } else {
        console.log('Pilha:', this.elementos.join(' '));
      }
    }
  }