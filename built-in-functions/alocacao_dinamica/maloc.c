#include <stdio.h>
#include <stdlib.h>

int main() {

    int *x;
    x = malloc(sizeof(int));

    if (x != NULL) {
        printf("Alocação bem sucedida\n");
        printf("%i\n", *x);
        *x = 50;
        printf("%i\n", *x);
    } else {
        printf("Alocação mal sucedida\n");
    }

    return 0;
}