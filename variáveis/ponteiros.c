#include <stdio.h>

int main() {
    int x = 10;    // Declaração de uma variável inteira
    int *ponteiro; // Declaração de um ponteiro para um inteiro

    ponteiro = &x; // Atribuição do endereço de x ao ponteiro

    printf("O valor de x: %d\n", x);
    printf("O valor armazenado no endereço apontado pelo ponteiro: %i\n",
           *ponteiro);
    printf("O endereço de x: %i\n", &x);
    printf("O endereço armazenado no ponteiro: %p\n", ponteiro);

    return 0;
}