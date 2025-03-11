int contarCaracteres(char texto[]) {
  int contador = 0;
  for (int i = 0; texto[i] != '\0'; i++) {
    contador++;
  }
  return contador;
}
