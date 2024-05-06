#include <stdint.h>
#include <stdio.h>

void numeros() {
    int8_t a = 2;    // 1 byte
    int16_t b = 3;   // 2 bytes
    short int y = 2; // 2 bytes
    int32_t c = 4;   // 4 bytes
    int64_t d = 5;   // 8 bytes
    long int e = 6;  // 8 bytes
}

int main() { printf("Tamanho: %zu", sizeof(long int)); }