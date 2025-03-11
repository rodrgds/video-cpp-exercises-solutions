#include <iostream>

struct Tempo {
  int horas;
  int minutos;
};

struct Intervalo {
  Tempo inicio;
  Tempo fim;
};

bool estaNoIntervalo(Intervalo i, Tempo t) {
  int tMinutos = t.horas * 60 + t.minutos;
  int inicioMinutos = i.inicio.horas * 60 + i.inicio.minutos;
  int fimMinutos = i.fim.horas * 60 + i.fim.minutos;

  return tMinutos >= inicioMinutos && tMinutos <= fimMinutos;
}

int main() {
  Intervalo intervalo;
  Tempo tempo;

  std::cout << "Introduz as horas do início do intervalo: ";
  std::cin >> intervalo.inicio.horas;
  std::cout << "Introduz os minutos do início do intervalo: ";
  std::cin >> intervalo.inicio.minutos;
  std::cout << "Introduz as horas do fim do intervalo: ";
  std::cin >> intervalo.fim.horas;
  std::cout << "Introduz os minutos do fim do intervalo: ";
  std::cin >> intervalo.fim.minutos;

  std::cout << "Introduz as horas do tempo: ";
  std::cin >> tempo.horas;
  std::cout << "Introduz os minutos do tempo: ";
  std::cin >> tempo.minutos;

  if (estaNoIntervalo(intervalo, tempo)) {
    std::cout << "O teu tempo " << tempo.horas << "h" << tempo.minutos 
              << "m está no intervalo [" << intervalo.inicio.horas << "h" 
              << intervalo.inicio.minutos << "m, " << intervalo.fim.horas << "h" 
              << intervalo.fim.minutos << "m].\n";
  } else {
    std::cout << "O teu tempo " << tempo.horas << "h" << tempo.minutos 
              << "m não está no intervalo [" << intervalo.inicio.horas << "h" 
              << intervalo.inicio.minutos << "m, " << intervalo.fim.horas << "h" 
              << intervalo.fim.minutos << "m].\n";
  }

  return 0;
}