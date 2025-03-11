#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  // não ligues a esta linha, é para obter um valor aleatório
  srand(time(0));
  int numeroSecreto = rand() % 100 + 1;
  int palpite;

  std::cout << "Adivinha o número entre 1 e 100!\n";

  do {
    std::cout << "Introduz o seu palpite: ";
    std::cin >> palpite;

    if (palpite < numeroSecreto) {
      std::cout << "Maior!\n";
    } else if (palpite > numeroSecreto) {
      std::cout << "Menor!\n";
    } else {
      std::cout << "Parabéns! Acertaste em " << numeroSecreto << "!\n";
    }
  } while (palpite != numeroSecreto);

  return 0;
}