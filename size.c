#include <stdio.h>
#include <string.h>
#include <sys/_types.h>

int main() {
    char *tamanho_caractere;
    unsigned int tamanho_inteiro;

    tamanho_caractere = "dsdsds dsad sdasdas";

    char monstrar_tamanho_caractere = strlen(tamanho_caractere);

    printf("Tamanho caractere: %d\n", monstrar_tamanho_caractere);


    tamanho_inteiro = sizeof(int);

    printf("Tamnho inteiro: %i\n", tamanho_inteiro);

    return 0;
}