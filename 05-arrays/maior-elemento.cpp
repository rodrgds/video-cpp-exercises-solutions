#include <iostream>

int main() {
  int numeros[] = {4, 12, 7, 23, 15};
  int maior = numeros[0];

  for (int num : numeros) {
    if (num > maior) {
      maior = num;
    }
  }

  std::cout << "O maior número que inseriste é: " << maior << "\n";

  return 0;
}