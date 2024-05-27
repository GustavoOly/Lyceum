#include <stdio.h>

int demonstrar_parametros_valor(int num, int num2) { return num + num2; }

int main() {
    printf("%i\n", demonstrar_parametros_valor(1, 2));
    return 0;
}