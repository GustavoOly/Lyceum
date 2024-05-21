#include <stdio.h>
#include <stdlib.h>

int main() {
    int *valor;

    valor = (int *)malloc(sizeof(int));
    printf("%p\n", (void *)valor);
    puts("Digite um numero: ");
    scanf("%d", valor);
    printf("%d\n", *valor);

    int *new = (int *)realloc(valor, sizeof(int));
    printf("%p\n", (void *)new);
    if (new == NULL) {
        puts("memoria insufuciente para realocação");
        free(valor);
        return 1;
    }

    free(valor);
    valor = NULL;
    return 0;
}