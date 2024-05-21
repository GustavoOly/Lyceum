#include <stdio.h>

int main() {
    puts("Digite uma string:");
    char palavra[100];
    fgets(palavra, sizeof(palavra), stdin);
    fflush(stdin);
    printf("%s\n", palavra);
    return 0;
}