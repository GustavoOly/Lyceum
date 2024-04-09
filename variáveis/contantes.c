#include <stdio.h>

// constate global
const int global = 14;

// constante local
void constante() {
  const float pi = 3.14;
  printf("%.2f\n", pi);
}

int main() {
  printf("%i\n", global);
  constante();
  constante();
  return 0;
}