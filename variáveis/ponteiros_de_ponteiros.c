#include <locale.h>
#include <stdio.h>
int main() {
    setlocale(LC_ALL, "pt_BR");
    int a = 40;
    int *pont1;
    int **pont2;
    pont1 = &a;
    pont2 = &pont1;
    printf("O endereço da variável a é: %p\n", &a);
    printf("O endereço do ponteiro pont1 é: %p\n", &pont1);
    printf("O endereço do ponteiro pont2 é: %p\n", &pont2);
    printf("O endereço apontado por pont1 é %p\n", pont1);
    printf("O endereço apontado por pont2 é %p\n", pont2);
    printf("E o valor armazenado em a é: %d\n", **pont2);
    return 0;
}