bool ehPalindromo(char texto[]) {
  int tamanho = 0;
  for (int i = 0; texto[i] != '\0'; i++) {
      tamanho++;
  }

  for (int i = 0; i < tamanho / 2; i++) {
    if (texto[i] != texto[tamanho - 1 - i]) {
      return false;
    }
  }
  return true;
}