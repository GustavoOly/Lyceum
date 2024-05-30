#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    puts("digite o tamanho do array: ");
    scanf("%i", &n);

    // Aloca memória dinamicamente para o array de inteiros
    int *array = (int *)malloc(n * (sizeof(int)));

    // Atribui valores aos elementos do array
    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    // mostra todos os valores de cada elemento da variável de ponteiro array
    puts("Exibir valores:");
    for (int i = 0; i < n; i++) {
        printf("%i\n", array[i]);
    }

    // Libera a memória alocada pelo array
    free(array);

    // Atribui NULL ao ponteiro para evitar acesso a memória não alocada
    array = NULL;
    return 0;
}