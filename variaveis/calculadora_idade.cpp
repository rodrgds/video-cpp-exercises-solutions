#include <iostream>

int main() {
  int anoNascimento;
  const int anoAtual = 2025;

  std::cout << "Introduza o ano de nascimento: ";
  std::cin >> anoNascimento;

  int idade = anoAtual - anoNascimento;

  std::cout << "Tem " << idade << " anos.\n";

  return 0;
}