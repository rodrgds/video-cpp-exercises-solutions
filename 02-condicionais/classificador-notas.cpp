#include <iostream>

int main() {
  float nota;

  std::cout << "Introduz a nota (0 a 20): ";
  std::cin >> nota;

  if (nota < 0 || nota > 20) {
    std::cout << "Nota inválida.\n";
  } else if (nota < 9.5) {
    std::cout << "Tás mal...\n";
  } else if (nota < 13) {
    std::cout << "É tsb\n";
  } else if (nota < 17) {
    std::cout << "Que luxo\n";
  } else {
    std::cout << "O colega do lado estudou...\n";
  }

  return 0;
}