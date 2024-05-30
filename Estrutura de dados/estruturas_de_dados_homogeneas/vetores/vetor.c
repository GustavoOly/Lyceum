#include <stdio.h>

int main() {
    // compilador infere automaticamente a quantidade de elementos
    int vetor[] = {1, 2, 3, 4, 5};
    // Determina o tamanho do vetor
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    // quantidade de elementos é pré-definida.
    int vetor2[2] = {1, 2};
    int tamanho2 = sizeof(vetor2) / sizeof(vetor2[0]);
    puts("saida do vetor 1");
    for (int i = 0; i < tamanho; i++) {
        printf("%i\n", vetor[i]);
    }
    puts("saida do vetor 2");
    for (int i = 0; i < tamanho2; ++i) {
        printf("%i\n", vetor2[i]);
    }

    return 0;
}