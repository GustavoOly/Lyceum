#include <stdio.h>

// procedimento
void demonstrar_procedimento() {
  static int valor = 1;
  printf("subrotina de procedimento: %i\n", valor);
  valor++;
}

// função
int demonstrar_funcao(int num, int num2) { return num + num2; }

int main() {
  demonstrar_procedimento();
  printf("subrotina de função: %i\n", demonstrar_funcao(2, 3));
  return 0;
}