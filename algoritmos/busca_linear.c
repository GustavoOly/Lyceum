#include <stdio.h>

int main() {
    int low, high, numero_buscado, meio;

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    low = 0;
    high = sizeof(array) / sizeof(0);
    numero_buscado = 7;

    while (low <= high) {
        meio = (low + high) / 2;
        puts("quantidade");
        if (numero_buscado == meio) {
            printf("Numero encontrado na posição:  %i\n", meio);
            break;
        } else if (array[meio] > numero_buscado) {
            high = meio - 1;
        } else {
            low = meio + 1;
        }
    }
    return 0;
}
