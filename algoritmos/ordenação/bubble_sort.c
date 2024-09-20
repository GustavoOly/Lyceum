#include <stdbool.h>
#include <stdio.h>

int bubble_sort(int *lista, int tamanho) {
    int troca;
    int iteracoes = 1;
    do {
        troca = false;
        for (int i = 0; i < tamanho - 1; ++i) {
            if (lista[i] > lista[i + 1]) {
                int aux = lista[i];
                lista[i] = lista[i + 1];
                lista[i + 1] = aux;
                troca = true;
            }
        }
        printf("repetições: %d\n", iteracoes++);
    } while (troca);
    return 0;
}

int exibir_lista(int *lista, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", lista[i]);
    }
    return 0;
}

int main() {
    int lista[] = {5, 2, 98, 32, 15};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    bubble_sort(lista, tamanho);
    puts("-------- Lista ordenada -----------");
    exibir_lista(lista, tamanho);
    return 0;
}