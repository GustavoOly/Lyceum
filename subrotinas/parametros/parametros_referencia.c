#include <stdio.h>

void demmonstrar_parametros_referencia(int *num) {
    int result = 5;
    *num = result;
}
int main() {
    int num = 1;
    printf("%i\n", num);
    demmonstrar_parametros_referencia(&num);
    printf("%i\n", num);
    printf("%i\n", num);
    return 0;
}