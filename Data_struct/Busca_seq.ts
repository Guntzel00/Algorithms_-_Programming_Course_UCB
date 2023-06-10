function buscaSequencial<T>(elementos: T[], valor: T): number {
    for (let i = 0; i < elementos.length; i++) {
      if (elementos[i] === valor) {
        return i; // Retorna o índice onde o valor foi encontrado
      }
    }
  
    return -1; // Retorna -1 caso o valor não seja encontrado
  }
  
  // Exemplo de uso
  const listaNumeros = [2, 5, 8, 10, 15, 20];
  const valorBuscado = 10;
  
  const indice = buscaSequencial(listaNumeros, valorBuscado);
  
  if (indice !== -1) {
    console.log(`O valor ${valorBuscado} foi encontrado no índice ${indice}.`);
  } else {
    console.log(`O valor ${valorBuscado} não foi encontrado na lista.`);
  }