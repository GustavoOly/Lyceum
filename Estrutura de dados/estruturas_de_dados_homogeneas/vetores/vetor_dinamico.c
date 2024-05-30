#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    puts("digite o tamanho do array: ");
    scanf("%i", &n);

    int *array = (int *)malloc(n * (sizeof(int)));

    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    puts("exibir valores");
    for (int i = 0; i < n; i++) {
        printf("%i\n", array[i]);
    }

    free(array);

    return 0;
}