#include <iostream>

int main() {
  int a, b;
  int temp;

  std::cout << "Introduza o valor de A: "; std::cin >> a;
  std::cout << "Introduza o valor de B: "; std::cin >> b;

  std::cout << "Antes da troca: A = " << a << ", B = " << b << "\n";

  temp = a;
  a = b;
  b = temp;

  std::cout << "Depois da troca: A = " << a << ", B = " << b << "\n";

  return 0;
}