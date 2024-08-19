#include <stdbool.h>
#include <stdio.h>

int bubble_sort(int *lista, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        printf("i %d\n", lista[i]);
        int trocou = false;
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                printf("temp %d\n", temp);
                lista[j] = lista[j + 1];
                printf("lista[j] %d\n", lista[j]);
                lista[j + 1] = temp;
                printf("lista[j + 1] %d\n", lista[j + 1]);
                trocou = true;
            }
        }
        printf("Valor de trocou: %s\n", trocou ? "true" : "false");
        if (!trocou) {
            puts("A lista já está ordenada");
            break;
        }
    }
    return -1;
}

int exibir_lista(int *lista, int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", lista[i]);
    }
    return 0;
}

int main() {
    int lista[] = {5, 2, 7, 1};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    bubble_sort(lista, tamanho);
    puts("-------- Lista ordenada -----------");
    exibir_lista(lista, tamanho);
    return 0;
}