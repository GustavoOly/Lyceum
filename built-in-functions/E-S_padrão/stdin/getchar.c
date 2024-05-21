#include <stdio.h>

int main() {
    puts("Digite um caractere:");
    char palavra = getchar();
    fflush(stdin); // limpa o buffer do teclado
    printf("%c\n", palavra);
    return 0;
}