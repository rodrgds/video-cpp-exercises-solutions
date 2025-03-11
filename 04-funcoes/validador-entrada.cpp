#include <iostream>

int validaEntrada(int min = 0, int max = 100) {
  int valor;
  do {
    std::cout << "Introduz um número entre " << min << " e " << max << ": ";
    std::cin >> valor;
  } while (valor < min || valor > max);
  return valor;
}

int main() {
  std::cout << "Vais inserir um número válido.\n";
  int numero = validaEntrada();
  std::cout << "Inseriste o número: " << numero << "\n";

  return 0;
}