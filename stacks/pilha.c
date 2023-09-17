#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define NUMBER 50

typedef struct pilha Pilha; 

struct pilha {
    int number;
    float vetor[NUMBER];
};


Pilha* createStack() {
    Pilha* pilha = (Pilha*)malloc(sizeof(Pilha));
    pilha->number = 0;
    return pilha;
}

void push(Pilha* p, float v) {
    if (p->number == NUMBER) 
    {
        printf("Capacidade máxima!\n"); 
        exit(1);
    }

    p->vetor[p->number] = v;
    p->number++;
}

float pop(Pilha* p) {
    float valor; 

    if (isEmpty(p)) {
        printf("Pilha vazia\n");
        exit(1);
    }

    valor = p->vetor[p->number - 1]; 
    p->number--; 
    return valor;
}

int isEmpty(Pilha* p) {
    return (p->number == 0);
}

void freeStack(Pilha* p) {
    free(p);
}

float top(Pilha* p) {
    if (isEmpty(p)) {
        printf("Pilha vazia\n");
        exit(1);
    }

    return p->vetor[p->number -1];
}