#include <stdio.h>

int busca_binaria(int lista[], int numero_buscado, int tamanho) {
    int low = 0;
    int high = tamanho - 1;
    int repeticaoes = 1;
    while (low < high) {
        int medium = (low + high) / 2;
        printf("%d\n", lista[medium]);
        printf("vezes %d\n", repeticaoes);
        repeticaoes++;
        if (medium == numero_buscado) {
            printf("Numero encontrado na posição %d", medium);
            return 0;
        } else if (lista[medium] < numero_buscado) {
            high = medium - 1;
        } else {
            low = medium + 1;
        }
    }
    return -1;
}

int main() {
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int numero_buscado = 7;
    busca_binaria(lista, numero_buscado, tamanho);
    return 0;
}