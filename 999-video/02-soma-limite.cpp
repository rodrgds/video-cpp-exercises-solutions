// Soma Até Limite (Ciclos e Variáveis)
// Faz um programa que soma todos os números de 1 até um limite que tu introduzes, usando um ciclo while e for.

#include <iostream>

int main() {
  int limite;

  std::cout << "Introduz o limite: ";
  std::cin >> limite;

  int soma = 0;
  
  int contador = 0;
  while (contador < limite) {
    contador++;
    soma += contador;
  }
  
  // for (int i = 1; i <= limite; i++) {
  //   soma += i;
  // }
  
  std::cout << "\n" << soma << "\n";

  return 0;
}