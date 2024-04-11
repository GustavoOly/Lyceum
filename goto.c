#include <stdio.h>

int main() {
  int x;
input:
  printf("Digite um número positivo: ");
  scanf("%d", &x);
  if (x <= 0)
    goto input; // Se o número digitado for menor ou igual a zero, volta para a
                // etiqueta 'input'
  printf("O número digitado é: %d\n", x);
  return 0;
}