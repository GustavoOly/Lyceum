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

    Node * temp =dq->front;
    dq->front = dq->front->next;

    if(dq->front == NULL){
        dq->rear = NULL;
    } else {
        dq->front->prev= NULL;
    }

    free(temp);
}

void deleteRear(Deque * dq) {
    if (isEmpty(dq)){
        puts("Deque vazio");
        return;
    }

    Node* temp = dq->rear;
    dq->rear = dq->rear->prev;
    if(dq->rear == NULL){
        dq->front = NULL;

    } else {
        dq->rear->next = NULL;
    }
    free(temp);
}

int getFront(Deque * dq){
    if(isEmpty(dq)){
        puts("Deque vazio");
        return -1;
    }

    return dq->front->data;
}

int getRear(Deque *dq){
    if(isEmpty(dq)){
        puts("Deque vazio");
        return -1;
    }
    return dq->rear->data;
}

int main() {
    Deque dq;
    initDeque(&dq);

    insertRear(&dq, 5);
    insertRear(&dq, 10);
    insertFront(&dq, 15);
    insertFront(&dq,20);

    printf("Elemento na frente: %d\n", getFront(&dq));
    printf("Elemento no final: %d\n", getRear(&dq));

    deleteFront(&dq);
    printf("Elemento na frente apos a remocao: %d\n", getFront(&dq));

    deleteRear(&dq);
    printf("Elemento no final apos a remocao: %d\n", getRear(&dq));

    return 0;
}