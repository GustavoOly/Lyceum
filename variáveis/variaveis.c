#include <stdio.h>

// variáveis locais
void somar2() {
  int y = 1;
  printf("%i\n", y);
  y++;
}

// variáveis estáticas locais
void somar1() {
  static int y = 1;
  printf("%i\n", y);
  y++;
}


int main() {

  somar1();
  somar1();
  somar1();

  somar2();
  somar2();

  return 0;
}