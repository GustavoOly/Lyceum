#include <stdio.h>

int insertion_sort(int *lista, int tamanho) {
    int repeticoes = 1;
    for (int i = 1; i < tamanho; i++) {
        int chave = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = chave;
        repeticoes++;
    }
    printf("repetições: %d\n", repeticoes);
    return 0;
}

void exibir_lista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; ++i) {
        printf("%d ", lista[i]);
    }
}

int main() {
    int lista[] = {5, 3, 98, 2, 15};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    insertion_sort(lista, tamanho);
    exibir_lista(lista, tamanho);
}