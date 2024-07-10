/*
   Para trabalhar com arquivos em C, usamos a estrutura do tipo FILE. A
   definição desta estrutura está em stdio.h
*/

#include <stdio.h>
#include <stdlib.h>


void criarArquivo(FILE **file) {
    *file = fopen("arquivo.txt", "w");
    if (!*file) {
        puts("Erro ao criar o arquivo");
        exit(1);
    }
}

void inserirDadosNoArquivo(FILE *file) {
    char *string = NULL;
    size_t len = 0;
    ssize_t read;
    puts("Escreva: ");
    read = getline(&string, &len, stdin);
    if (read == -1) {
        puts("Erro ao ler a linha");
        exit(1);
    }
    fprintf(file, "%s", string);
    free(string);
}

int main() {
    FILE *file = NULL;
    criarArquivo(&file);
    inserirDadosNoArquivo(file);
    fclose(file);
    return 0;
}