#include <stdio.h>

// laços de repetição

void laco_for() { // laço contador
    int x = 10;
    for (int i = 0; i <= x; i++) {
        printf("i = %i\n", i);
    }
}

void laco_while() { // laço pré-teste de fluxo verdadeiro
    int x = 10;
    while (x >= 1) {
        printf("x = %i\n", x);
        x--;
    }
}

void laco_do_while() { // laço pós-teste de fluxo verdadeiro
    int x = 10;
    do {
        printf("x = %i\n", x);
        x--;
    } while (x >= 1);
}

// desvios de fluxo

void devio_goto() {
    int bolo = 12;

Comer:
    bolo--;
    printf("Menos um pedaco : %i\n", bolo);
    if (bolo > 0)
        goto Comer;
}

int main() {
    laco_for();
    laco_while();
    devio_goto();

    return 0;
}