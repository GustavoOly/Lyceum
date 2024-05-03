#include <stdio.h>

int main() {
    char *x;
    x = (char *)"Olá mundo\n";
    printf("%s", x);

    char y;
    printf("digite algo: \n");
    y = getchar();

    printf("%c", y);

    return 0;
}