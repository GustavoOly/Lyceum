#include <stdio.h>

void converter_inteiro_para_float() {
    int num1 = 8;
    int num2 = 2;
    float resultado = (float)num1 / num2;
    printf("%.2f\n", resultado);
}

void converter_float_para_inteiro() {
    float num1 = 8.0;
    float num2 = 2.0;
    int resultado = (int)num1 / num2;
    printf("%d\n", resultado);
}

void converter_char_para_inteiro() {
    char letra = 'a'; // converte para o valor ASCII
    int resultado = (int)letra;
    printf("%d\n", resultado);
}

void converter_inteiro_para_char() {
    int num = 97; // converte para o caractere correspondente ao valor ASCII
    char resultado = (char)num;
    printf("%c\n", resultado);
}

void converter_float_para_char() {
    float num = 97.0; // converte para o caractere correspondente ao valor ASCII
    char resultado = (char)num;
    printf("%c\n", resultado);
}

int main() {
    converter_inteiro_para_float();
    converter_float_para_inteiro();
    converter_char_para_inteiro();
    converter_inteiro_para_char();
    converter_float_para_char();
    return 0;
}