#include <iostream>

int maximo(int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

int main() {
  int num1, num2;

  std::cout << "Introduz o primeiro número: ";
  std::cin >> num1;
  std::cout << "Introduz o segundo número: ";
  std::cin >> num2;

  std::cout << "O maior número é: " << maximo(num1, num2) << "\n";

  return 0;
}