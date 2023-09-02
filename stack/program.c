#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef struct {
    int data[MAX_STACK_SIZE];
    int top;
} Stack;

void initStack(Stack* stack) {
    stack->top = -1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Erro: a pilha está cheia\n");
        exit(1);
    }
    stack->data[++stack->top] = value;
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Erro: a pilha está vazia\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

void selectionSort(Stack* stack) {
    Stack tempStack;
    initStack(&tempStack);

    while (!isEmpty(stack)) {
        int min = pop(stack);
        push(&tempStack, min);

        while (!isEmpty(stack)) {
            int x = pop(stack);
            if (x < min) {
                push(&tempStack, min);
                min = x;
            } else {
                push(&tempStack, x);
            }
        }
    }

    while (!isEmpty(&tempStack)) {
        push(stack, pop(&tempStack));
    }
}

int main() {
    Stack stack;
    initStack(&stack);

    int n;
    printf("Quantos números deseja ordenar? ");
    scanf("%d", &n);

    printf("Digite os números:\n");
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        push(&stack, num);
    }

    selectionSort(&stack);

    printf("Números ordenados:\n");
    while (!isEmpty(&stack)) {
        printf("%d\n", pop(&stack));
    }

    return 0;
}
