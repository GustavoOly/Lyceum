#include <stdio.h>

void demonstrar_padrao() {
    int auto x = 10; // storage classe padrão (armazenamento: baseado em pilha
                     // i.e. termina quando a função termina)
    printf("%d\n", x);
}

void demonstrar_static() {
    int static y = 10; // storage classe estática (armazenamento: baseado em
                       // dados i.e. dura até ofinal do programa)
    printf("%d\n", y);
}

void demonstrar_register() {
    register int z =
        10; // storage classe registrador (armazenamento: baseado em registrador
            // // i.e. rápido e com tamanho limitado de armazenamento)
    printf("%d\n", z);
}

void demonstrar_extern() {
    // extern int a = 10; // storage classe externa (armazenamento: baseado em
    // dados i.e. dura até o final do programa) printf("%d\n", a);
}

int main() {
    demonstrar_padrao();
    demonstrar_static();
    demonstrar_register();
    return 0;
}