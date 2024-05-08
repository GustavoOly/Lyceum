#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_constante() {
    char *str;
    str = (char *)"Oly Const";
    printf("Seu nome: %s\n", str);
}

void str_dinamica() {
    char *str;
    str = malloc(20 * sizeof(char));
    if (str == NULL) {
        puts("Não foi possivel alocar str na memoria");
    }
    strcpy(str, "oly Din");
    printf("%s\n", str);
    free(str);
}

int main() {
    str_constante();
    str_dinamica();
    return 0;
}