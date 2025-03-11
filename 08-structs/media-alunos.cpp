#include <iostream>

struct Aluno {
  char nome[50];
  int idade;
  float notas[3];
};

float calcularMedia(float notas[]) {
  return (notas[0] + notas[1] + notas[2]) / 3.0;
}

int main() {
  int NUM_ALUNOS = 3;
  Aluno turma[NUM_ALUNOS];

  for (int i = 0; i < NUM_ALUNOS; i++) {
    std::cout << "Introduz o nome do aluno " << i + 1 << ": ";
    std::cin >> turma[i].nome;
    std::cout << "Introduz a idade do aluno " << i + 1 << ": ";
    std::cin >> turma[i].idade;
    for (int j = 0; j < 3; j++) {
      std::cout << "Introduz a nota " << j + 1 << " do aluno " << i + 1 << ": ";
      std::cin >> turma[i].notas[j];
    }
  }

  for (int i = 0; i < NUM_ALUNOS - 1; i++) {
    for (int j = i + 1; j < NUM_ALUNOS; j++) {
      if (calcularMedia(turma[i].notas) < calcularMedia(turma[j].notas)) {
        Aluno temp = turma[i];
        turma[i] = turma[j];
        turma[j] = temp;
      }
    }
  }

  std::cout << "\nAlunos ordenados por média:\n";
  for (int i = 0; i < NUM_ALUNOS; i++) {
    std::cout << "Nome: " << turma[i].nome << ", Idade: " << turma[i].idade 
              << ", Média: " << calcularMedia(turma[i].notas) << "\n";
  }

  return 0;
}