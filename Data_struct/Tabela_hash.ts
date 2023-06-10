class TabelaHash<K, V> {
    private elementos: Array<Array<[K, V]>>;
    private tamanho: number;
  
    constructor(tamanho: number) {
      this.elementos = new Array(tamanho);
      this.tamanho = tamanho;
    }
  
    private calcularHash(chave: K): number {
      const chaveString = String(chave);
      let hash = 0;
  
      for (let i = 0; i < chaveString.length; i++) {
        const charCode = chaveString.charCodeAt(i);
        hash += charCode;
      }
  
      return hash % this.tamanho;
    }
  
    put(chave: K, valor: V): void {
      const indice = this.calcularHash(chave);
  
      if (!this.elementos[indice]) {
        this.elementos[indice] = [];
      }
  
      const lista = this.elementos[indice];
      let encontrado = false;
  
      for (let i = 0; i < lista.length; i++) {
        if (lista[i][0] === chave) {
          lista[i][1] = valor;
          encontrado = true;
          break;
        }
      }
  
      if (!encontrado) {
        lista.push([chave, valor]);
      }
    }
  
    get(chave: K): V | undefined {
      const indice = this.calcularHash(chave);
  
      if (!this.elementos[indice]) {
        return undefined;
      }
  
      const lista = this.elementos[indice];
  
      for (let i = 0; i < lista.length; i++) {
        if (lista[i][0] === chave) {
          return lista[i][1];
        }
      }
  
      return undefined;
    }
  
     remove(chave: K): void {
      const indice = this.calcularHash(chave);
  
      if (!this.elementos[indice]) {
        return;
      }
  
      const lista = this.elementos[indice];
  
      for (let i = 0; i < lista.length; i++) {
        if (lista[i][0] === chave) {
          lista.splice(i, 1);
          break;
        }
      }
    }
  
    contains(chave: K): boolean {
      const indice = this.calcularHash(chave);
  
      if (!this.elementos[indice]) {
        return false;
      }
  
      const lista = this.elementos[indice];
  
      for (let i = 0; i < lista.length; i++) {
        if (lista[i][0] === chave) {
          return true;
        }
      }
  
      return false;
    }
  
    size(): number {
      let count = 0;
  
      for (const lista of this.elementos) {
        if (lista) {
          count += lista.length;
        }
      }
  
      return count;
    }
  }