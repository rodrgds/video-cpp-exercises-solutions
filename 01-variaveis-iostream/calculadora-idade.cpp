#include <iostream>

int main() {
  int anoNascimento;
  const int anoAtual = 2025;

  std::cout << "Introduz o teu ano de nascimento: ";
  std::cin >> anoNascimento;

  int idade = anoAtual - anoNascimento;

  std::cout << "Tens " << idade << " anos (provavelmente).\n";

  return 0;
}