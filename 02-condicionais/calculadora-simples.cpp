#include <iostream>

int main() {
  double num1, num2;
  char operacao;

  std::cout << "Introduz o primeiro número: ";
  std::cin >> num1;
  std::cout << "Introduz o segundo número: ";
  std::cin >> num2;
  std::cout << "Introduz a operação (+, -, *, /): ";
  std::cin >> operacao;

  // com if
  if (operacao == '+') {
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
  } else if (operacao == '-') {
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
  } else if (operacao == '*') {
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
  } else if (operacao == '/') {
    if (num2 != 0) {
      std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    } else {
      std::cout << "Erro: Divisão por zero.\n";
    }
  } else {
    std::cout << "Operação inválida.\n";
  }

  // com switch
  // switch (operacao) {
  //   case '+':
  //     std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
  //     break;
  //   case '-':
  //     std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
  //     break;
  //   case '*':
  //     std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
  //     break;
  //   case '/':
  //     if (num2 != 0) {
  //       std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
  //     } else {
  //       std::cout << "Erro: Divisão por zero.\n";
  //     }
  //     break;
  //   default:
  //     std::cout << "Operação inválida.\n";
  // }

  return 0;
}