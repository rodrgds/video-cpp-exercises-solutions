// Contagem de Letras (Funções e Char Arrays)
// Escreve uma função que recebe um array de caracteres e conta quantas letras k (maiúsculas ou minúsculas) existem. Pede uma palavra e mostra o resultado.

int contarLetras(char texto[], char letra) {
  int contador = 0;
  int i = 0;

  int indiceLetra;
  if (letra >= 'A' && letra <= 'Z') {
    indiceLetra = letra - 'A';
  } else if (letra >= 'a' && letra <= 'z') {
    indiceLetra = letra - 'a';
  }

  while (texto[i] != '\0') {
    int indice;
    if (texto[i] >= 'A' && texto[i] <= 'Z') {
      indice = texto[i] - 'A';
    } else if (texto[i] >= 'a' && texto[i] <= 'z') {
      indice = texto[i] - 'a';
    }

    if (indice == indiceLetra) {
      contador++;
    }
    i++;
  }
  return contador;
}