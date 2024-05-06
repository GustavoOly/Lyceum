#include <stdio.h>
#include <stdlib.h>

int main( ){
    int * valor;

    valor = malloc(sizeof(int));

    printf("Digite um numero: ");
    scanf("%i", valor);
    printf("%i\n", *valor);

    printf("Digite um numero: ");
    scanf("%i", valor);
    printf("%i\n", *valor);

    printf("Digite um numero: ");
    scanf("%i", valor);
    printf("%i\n", *valor);a

    free(valor);
    return 0;
}