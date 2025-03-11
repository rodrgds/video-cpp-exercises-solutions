#include <iostream>

int main() {
  float fahrenheit;
  float celsius;

  std::cout << "Introduz a temperatura em Fahrenheit: ";
  std::cin >> fahrenheit;

  celsius = (fahrenheit - 32) * 5.0 / 9.0;

  std::cout << fahrenheit << "°F equivale a " << celsius << "°C\n";

  return 0;
}