#include <iostream>

int main() {
  int numero;

  std::cout << "Introduza um número para a tabuada: ";
  std::cin >> numero;

  // com for
  for (int i = 1; i <= 10; i++) {
    std::cout << numero << " x " << i << " = " << numero * i << "\n";
  }

  // com while
  // int i = 1;
  // while (i <= 10) {
  //   std::cout << numero << " x " << i << " = " << numero * i << "\n";
  //   i++;
  // }
  
  // com do ... while
  // int i = 1;
  // do {
  //     std::cout << numero << " x " << i << " = " << numero * i << "\n";
  //     i++;
  // } while (i <= 10);

  return 0;
}