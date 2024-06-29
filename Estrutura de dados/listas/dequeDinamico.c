/*
 Alocação dinâmica:
        - O espaço de memória é alocado em tempo de execução.
        - O deque cresce a medida que os elementos são armazenados, e diminui a
   medida que os elementos são excluidos.
        - Acesso encadeado: cada elemento pode estar em uma área destinta de
   memória.

     Pode ser aplicada em duas abordagens:
        - Lista dinâmica encadeada;
        - Lista dinâmica duplamente encadeada (mais eficiente na remoção do nó
   final).
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct {
    Node *front;
    Node *rear;
} Deque;

void initDeque(Deque *dq) {
    dq->front = NULL;
    dq->rear = NULL;
}

int isEmpty(Deque *dq) { return dq->front == NULL; }

void insertFront(Deque *dq, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        puts("Erro de alocação de memória");
        return;
    }

    newNode->data = data;
    newNode->next = dq->front;
    newNode->prev = NULL;

    if (isEmpty(dq)) {
        dq->rear = newNode;
    } else {
        dq->front->prev = newNode;
    }
    dq->front = newNode;
}

void insertRear(Deque *dq, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode) {
        puts("Erro de alocação de memária");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = dq->rear;

    if (isEmpty(dq)) {
        dq->front = newNode;
    } else {
        dq->rear->next = newNode;
    }

    dq->rear = newNode;
}

void deleteFront(Deque *dq) {
    if (isEmpty(dq)) {
        puts("Deque vazio");
        return;
    }
}

int main() {
    puts("test");
    return 0;
}