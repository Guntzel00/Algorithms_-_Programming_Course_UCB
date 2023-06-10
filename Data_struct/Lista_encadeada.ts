// Definição da classe Nó
class No<T> {
    dado: T;
    proximo: No<T> | null;
  
    constructor(dado: T) {
      this.dado = dado;
      this.proximo = null;
    }
  }
  
  // Definição da classe ListaEncadeada
  class ListaEncadeada<T> {
    cabeca: No<T> | null;
    cauda: No<T> | null;
  
    constructor() {
      this.cabeca = null;
      this.cauda = null;
    }
  
    estaVazia(): boolean {
      return this.cabeca === null;
    }
  
    adicionarNoFim(dado: T): void {
      const novoNo = new No(dado);
  
      if (this.estaVazia()) {
        this.cabeca = novoNo;
        this.cauda = novoNo;
      } else {
        this.cauda!.proximo = novoNo;
        this.cauda = novoNo;
      }
    }
  
    adicionarNoInicio(dado: T): void {
      const novoNo = new No(dado);
  
      if (this.estaVazia()) {
        this.cabeca = novoNo;
        this.cauda = novoNo;
      } else {
        novoNo.proximo = this.cabeca;
        this.cabeca = novoNo;
      }
    }
  
    remover(dado: T): void {
      if (this.estaVazia()) {
        return;
      }
  
      if (this.cabeca!.dado === dado) {
        this.cabeca = this.cabeca!.proximo;
  
        if (this.cabeca === null) {
          this.cauda = null;
        }
      } else {
        let noAtual = this.cabeca;
        while (noAtual!.proximo !== null && noAtual!.proximo!.dado !== dado) {
          noAtual = noAtual!.proximo;
        }
  
        if (noAtual!.proximo !== null) {
          noAtual!.proximo = noAtual!.proximo!.proximo;
  
          if (noAtual!.proximo === null) {
            this.cauda = noAtual;
          }
        }
      }
    }
  
    imprimir(): void {
      if (this.estaVazia()) {
        console.log('A lista está vazia.');
      } else {
        let noAtual = this.cabeca;
        while (noAtual !== null) {
          console.log(noAtual.dado);
          noAtual = noAtual.proximo;
        }
      }
    }
  }
  
  // Exemplo de uso
  const listaEncadeada = new ListaEncadeada<number>();
  
  listaEncadeada.adicionarNoFim(1);
  listaEncadeada.adicionarNoFim(2);
  listaEncadeada.adicionarNoFim(3);
  
  listaEncadeada.adicionarNoInicio(0);
  
  listaEncadeada.imprimir(); // Resultado esperado: 0 1 2 3
  
  listaEncadeada.remover(2);
  
  listaEncadeada.imprimir(); // Resultado esperado: 0 1 3