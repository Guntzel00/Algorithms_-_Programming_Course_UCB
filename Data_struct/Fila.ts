// Definição da classe Fila
class Fila<T> {
    private elementos: T[];
  
    constructor() {
      this.elementos = [];
    }
  
    isEmpty(): boolean {
      return this.elementos.length === 0;
    }
  
    enqueue(elemento: T): void {
      this.elementos.push(elemento);
    }
  
    dequeue(): T | undefined {
      if (this.isEmpty()) {
        return undefined;
      }
  
      return this.elementos.shift();
    }
  
    front(): T | undefined {
      if (this.isEmpty()) {
        return undefined;
      }
  
      return this.elementos[0];
    }
  
    size(): number {
      return this.elementos.length;
    }
  
    print(): void {
      if (this.isEmpty()) {
        console.log('A fila está vazia.');
      } else {
        console.log('Fila:', this.elementos.join(' '));
      }
    }
  }

  // Exemplo de uso
const fila = new Fila<number>();

fila.enqueue(1);
fila.enqueue(2);
fila.enqueue(3);

fila.print();
// Resultado esperado: Fila: 1 2 3

console.log('Elemento removido:', fila.dequeue());
// Resultado esperado: Elemento removido: 1

console.log('Elemento do início da fila:', fila.front());
// Resultado esperado: Elemento do início da fila: 2

console.log('Tamanho da fila:', fila.size());
// Resultado esperado: Tamanho da fila: 2

fila.print();
// Resultado esperado: Fila: 2 3