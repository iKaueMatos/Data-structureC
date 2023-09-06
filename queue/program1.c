// o que e uma fila ? 

// Estrutura comum no mundo real 
// - formada sempre que a prestação de um serviço e mais lenta que a demanda
// - fila em banco/caixas/lojas
// - atendimento de suporte 
// - fila de impressão
// - fila de processos

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queueElements[MAX_SIZE];
// frente -> front
int front = -1;
//traseira -> rear
int rear = -1;

void queue(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("A fila está cheia. Não é possível queue.\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }

    queueElements[++rear] = element;
}

int unqueue() {
    if (front == -1) {
        printf("A queue está vazia. Não é possível desenfileirar.\n");
        return -1;
    }

    int element = queueElements[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }

    return element;
}

int isEmpty() {
    return (front == -1);
}

int size() {
    if (isEmpty()) {
        return 0;
    }

    return (rear - front + 1);
}

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int i;
    int count = 7;

    for (i = 0; i < count; i++)
    {
        queue(array[i]);
    }

    printf("Tamanho da queue: %d\n", size());
    while (!isEmpty()) {
        printf("Elemento desenfileirado: %d\n", unqueue());
    }

    printf("Tamanho da queue após desenfileirar todos: %d\n", size());
    return 0;
}
