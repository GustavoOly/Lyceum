#include <stdio.h>
#include <stdlib.h>

void static selection_sort(int *lista, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int minimo = i;
        for (int j = i; j < tamanho; j++) {
            if (lista[j] < lista[minimo]) {
                minimo = j;
            }
            if (minimo != i) {
                int temp = lista[i];
                lista[i] = lista[minimo];
                lista[minimo] = temp;
            }
        }
    }
}

void static exibir_lista(int *lista, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%d -> ", lista[i]);
    }
}

int main() {
    int max_lista = 100;
    int lista[max_lista];
    for (int i = 0; i < max_lista; ++i) {
        lista[i] = rand() % 100;
    }
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    puts("lista não ordenada:");
    exibir_lista(lista, tamanho);
    selection_sort(lista, tamanho);
    puts("\nLista ordenada:");
    exibir_lista(lista, tamanho);
    return 0;
}