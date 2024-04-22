#include <stdio.h>
#include <stdlib.h>

static int somar() { 
	static int num = 10;
    static int num2 = 20;
    return num + num2;
}

static int verificar() {
    int num = 20;
    int num2 = 10;
    return num - num2;
}

int main() {
    printf("%i\n", somar());
    printf("%i\n", somar());
    return 0;
}