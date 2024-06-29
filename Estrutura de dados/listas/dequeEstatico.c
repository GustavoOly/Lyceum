/*
   Deques são um tipo de listas onde as inserções e remoções de elementos
   são realizados apenas nas extremidades da lista.

   Está implementação pode ser estática ou dinamica.

   Alocação estática:
   - O espaço de memoria é alocado no momento da compilação.
   - Exige a deinição do número máximo de elementos do deque.
   - Acesso sequencial: elementos consecutivos na memória.

   Pode ser aplicado em duas abordagens:
   - Array não circular;
   - Array circular (mais eficiente).

*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int arr[MAX];
    int front;
    int rear;
    int size;
} Deque;

void initDeque(Deque *dq) {
    dq->front = -1;
    dq->rear = 0;
    dq->size = 0;
}

bool isFull(Deque *dq) { return dq->size == MAX; }

bool isEmpty(Deque *dq) { return dq->size == 0; }

void insertFront(Deque *dq, int key) {
    if (isFull(dq)) {
        puts("Deque cheio");
        return;
    }

    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX - 1;
    } else {
        dq->front = dq->front - 1;
    }

    dq->arr[dq->front] = key;
    dq->size++;
}

void insertRear(Deque *dq, int key) {
    if (isFull(dq)) {
        puts("Deque cheio");
        return;
    }

    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } else {
        dq->rear = dq->rear + 1;
    }

    dq->arr[dq->rear] = key;
    dq->size++;
}

void deleteFront(Deque *dq) {
    if (isEmpty(dq)) {
        puts("Deque vazio");
        return;
    }

    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->front == MAX - 1) {
        dq->front = 0;
    } else {
        dq->front = dq->front + 1;
    }
    dq->size--;
}

void deleteRear(Deque *dq) {
    if (isEmpty(dq)) {
        puts("Deque vazio");
        return;
    }
    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } else {
        dq->rear = dq->rear - 1;
    }

    dq->size--;
}

int getFront(Deque *dq) {
    if (isEmpty(dq)) {
        puts("Deque vazio");
        return -1;
    }
    return dq->arr[dq->front];
}

int getRear(Deque *dq) {
    if (isEmpty(dq) || dq->rear < 0) {
        puts("Deque vazio");
        return -1;
    }
    return dq->arr[dq->rear];
}

int main() {
    Deque dq;
    initDeque(&dq);

    insertRear(&dq, 5);
    insertRear(&dq, 10);
    insertFront(&dq, 15);
    insertFront(&dq, 20);

    printf("Elemento na frente: %d\n", getFront(&dq));
    printf("Elemento no final: %d\n", getRear(&dq));

    deleteFront(&dq);
    printf("Elemento na frente após remoção: %d\n", getFront(&dq));

    deleteRear(&dq);
    printf("Elemento no final após remoção: %d\n", getRear(&dq));

    return 0;
}
