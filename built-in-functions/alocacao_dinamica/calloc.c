#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x;
    x = calloc(2, sizeof(int));
    if (x != NULL) {
        printf("Alocação bem sucedida\n");
        printf("%i\n", x[0]);
        x[0] = 50;
        x[1] = 60;
        printf("%i\n", x[0]);
        printf("%i\n", x[1]);
    } else {
        printf("Alocação mal sucedida\n");
    }
    return 0;
}