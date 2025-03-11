#include <iostream>

int main() {
  int numeros[] = {4, 12, 7, 23, 15};
  int maior = numeros[0];

  // com range-based for
  for (int num : numeros) {
    if (num > maior) {
      maior = num;
    }
  }

  // com for
  // for (int i = 0; i < 5; i++) {
  //   if (numeros[i] > maior) {
  //     maior = numeros[i];
  //   }
  // }

  std::cout << "O maior número que inseriste é: " << maior << "\n";

  return 0;
}