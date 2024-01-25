#include <stdio.h>
#include <stdbool.h>
#include "func.h"

int adicao(int num1, int num2);
int sub(int num1, int num2);
float mult(float num1, float num2);
bool verd(bool num1, bool num2);

int main(int argc, char const *argv[])
{
    char thola;
    int resultado = somar(4,3);
    printf("valor: %d\n", resultado);
    printf("%d \n",adicao(1,3));
    printf("%d \n", sub(4,2));
    printf("%.1f \n", mult(2,2));
    verd(true, true);

    thola = "";
    printf("%c Escreva uma coisa \n ");
    scanf("%c", thola);
    printf("%c você é um: \n", thola);
    return 0;
}

int adicao(int num1, int num2){
    return num1 + num2;
}

int sub(int num1, int num2){
    return num1 - num2;
}

float mult(float num1, float num2){
    return num1 * num2;
}

bool verd(bool num1, bool num2){
    if (num1 ^ num2 == true) {printf("Verdadeiro");} else{printf("Falso");}
}