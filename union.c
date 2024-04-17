#include <stdio.h>

union Resultado {
    int inteiro;
    float ponto_flutuante;
    char caractere;
};

int main() {
    union Resultado valor;
    valor.inteiro = 10;
    printf("%d\n", valor.inteiro);
    valor.caractere = 'A';
    printf("%c\n", valor.caractere);

    valor.ponto_flutuante = 3.14;
    printf("%.2f\n", valor.ponto_flutuante);

    return 0;
}