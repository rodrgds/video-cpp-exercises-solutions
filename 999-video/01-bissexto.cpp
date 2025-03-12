// Verificador de Ano Bissexto (Variáveis e Condicionais)
// Cria um programa que pede um ano e verifica se ele é bissexto. Um ano é bissexto se for divisível por 4, mas não por 100, exceto se for divisível por 400.

#include <iostream>

int main() {
  int ano;
  std::cin >> ano;

  if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
    std::cout << "O ano " << ano << " é bissexto";
  } else {
    std::cout << "O ano " << ano << " não é bissexto";
  }

  return 0;
}