#include <stdio.h>
#include <stdlib.h>

void demonstrar_vetor() {
    puts("vetor");
    int vetor[10];
    vetor[0] = 1;
    printf("%i\n", vetor[0]);
}
void demonstrar_vetor_dinamico() {
    puts("Vetor dinamico");
    int *vetor = malloc(sizeof(int));
    vetor[0] = 2;
    vetor[1] = 3;
    vetor[2] = 4;
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    free(vetor);
    vetor = NULL;
}

int main() {
    demonstrar_vetor();
    demonstrar_vetor_dinamico();
    return 0;
}