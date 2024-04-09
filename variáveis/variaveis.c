#include <stdio.h>

// variáveis estáticas locais
void somar() {
  static int y = 1;
  printf("%i\n", y);
  y++;
}

// variáveis locais
void somar2() {
  int y = 1;
  printf("%i\n", y);
  y++;
}

int main() {

  somar();
  somar();
  somar();

  somar2();
  somar2();
  somar2();

  return 0;
}