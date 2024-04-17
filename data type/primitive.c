/*
char //caracter
5int  //inteiro
floaf  //real de precisão simples
double // real de precisão dupla
void  // vazio (sem valor)
*/

// Os modificadores alteram o tamanho do tipo de dado ou sua forma de
// representação.

/*
signed //caracter
unsigned //inteiro
long //longo
short //curto
*/

// biblioteca: é um arquivo da linguagem que contém comandos para serem usados

#include <stdbool.h> //biblioteca para trabalhar com valores boleanos
#include <stdio.h>   //biblioteca para entrada e saída de dados

void real() {
    float n1;
    n1 = 1.1;
    printf("Valor de n1 = %.1f", n1);
}

int main(void) // função principal
{              // inicio
    int n1;
    n1 = 10;
    printf("Valor de n1 = %d", n1);
    real();
    return 0; // valor de retorno da função main - zero signfica que executou
              // com sucesso.
} // fim do program