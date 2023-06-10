function buscaBinaria<T>(elementos: T[], valor: T): number {
    let inicio = 0;
    let fim = elementos.length - 1;
  
    while (inicio <= fim) {
      const meio = Math.floor((inicio + fim) / 2);
  
      if (elementos[meio] === valor) {
        return meio; // Retorna o índice onde o valor foi encontrado
      } else if (elementos[meio] < valor) {
        inicio = meio + 1;
      } else {
        fim = meio - 1;
      }
    }
  
    return -1; // Retorna -1 caso o valor não seja encontrado
  }
  
  // Exemplo de uso
  const listaNumerosOrdenada = [2, 5, 8, 10, 15, 20];
  const valorBuscado = 10;
  
  const indice = buscaBinaria(listaNumerosOrdenada, valorBuscado);
  
  if (indice !== -1) {
    console.log(`O valor ${valorBuscado} foi encontrado no índice ${indice}.`);
  } else {
    console.log(`O valor ${valorBuscado} não foi encontrado na lista.`);
  }
  