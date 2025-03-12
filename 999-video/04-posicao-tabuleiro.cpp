// Posição Válida em Tabuleiro (Structs e Arrays)
// Cria uma struct chamada Coordenada com x e y. Pede uma coordenada e verifica se ela está dentro de um tabuleiro de tamanho n x n.

struct Coordenada {
  int x;
  int y;
};

bool posicaoValida(Coordenada c, int tamanho) {
  return (c.x >= 1 && c.x <= tamanho && c.y >= 1 && c.y <= tamanho);
}