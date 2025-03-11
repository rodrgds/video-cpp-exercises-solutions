#include <iostream>

void mostrarTabuleiro(char tabuleiro[3][3]) {
  std::cout << "\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      std::cout << tabuleiro[i][j];
      if (j < 2) std::cout << " | ";
    }
    std::cout << "\n";
    if (i < 2) std::cout << "---------\n";
  }
  std::cout << "\n";
}

bool verificarVitoria(char tabuleiro[3][3], char jogador) {
  for (int i = 0; i < 3; i++) {
    if (tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) return true;
    if (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador) return true;
  }
  if (tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) return true;
  if (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador) return true;
  return false;
}

bool tabuleiroCheio(char tabuleiro[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (tabuleiro[i][j] == ' ') return false;
    }
  }
  return true;
}

int main() {
  char tabuleiro[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
  char jogador = 'X';
  int linha, coluna;

  std::cout << "Bem-vindo ao Jogo do Galo! Tu começas com 'X'.\n";

  while (true) {
    mostrarTabuleiro(tabuleiro);

    std::cout << "Jogador " << jogador << ", introduz a linha (0-2): ";
    std::cin >> linha;
    std::cout << "Jogador " << jogador << ", introduz a coluna (0-2): ";
    std::cin >> coluna;

    if (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == ' ') {
      tabuleiro[linha][coluna] = jogador;

      if (verificarVitoria(tabuleiro, jogador)) {
        mostrarTabuleiro(tabuleiro);
        std::cout << "Parabéns, jogador " << jogador << "! Ganhaste!\n";
        break;
      }

      if (tabuleiroCheio(tabuleiro)) {
        mostrarTabuleiro(tabuleiro);
        std::cout << "Empate! O tabuleiro está cheio.\n";
        break;
      }

      jogador = (jogador == 'X') ? 'O' : 'X';
    } else {
      std::cout << "Jogada inválida! Tenta novamente.\n";
    }
  }

  return 0;
}