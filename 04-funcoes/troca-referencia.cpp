#include <iostream>

void troca(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x, y;

  std::cout << "Introduz o valor de X: ";
  std::cin >> x;
  std::cout << "Introduz o valor de Y: ";
  std::cin >> y;

  std::cout << "Antes da troca: X = " << x << ", Y = " << y << "\n";

  troca(x, y);

  std::cout << "Depois da troca: X = " << x << ", Y = " << y << "\n";

  return 0;
}