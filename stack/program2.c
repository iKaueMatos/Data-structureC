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
    return stack->top == MAX_STACK_SIZE -1;
}

void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("ERRO a pilha está vazia");
        exit(1);
    }

    stack->data[++stack->top] = value;
}

//Responsavel por ordenar os valores dentro da pilha
void selectionSort(Stack* stack) {
    Stack tempStack;
    initStack(&tempStack);

    while (!isEmpty(stack)) 
    {   
        //pop -> devolve o valor que esta no topo da pilha
        int top = pop(stack);
        //recebendo a Stack Temporaria que e para ser armazenado e o valor que
        // para ser armazenado que nesse caso e o valor do topo da pilha
        push(&tempStack, top);

        while (!isEmpty(stack)) 
        {
            int valueTop = pop(stack);

            if (valueTop < top) {
                push(&tempStack, top);
                top = valueTop;
            } else {
                push(&tempStack, valueTop);
            }
        }
    }

    while (!isEmpty(&tempStack)) {
        push(stack, pop(&tempStack));
    }
}

int main(int argc, char const *argv[])
{
    Stack stack;
    initStack(&stack);

    int number;
    printf("Quantos números deseja ordenar? ");
    scanf("%d", &number);

    printf("Digite os numeros:\n");
    for (int init = 0; init < number; init++)
    {
        int num;
        scanf("%d", &num);
        push(&stack, num);
    }
    
    selectionSort(&stack);
    printf("Numeros Ordenados:\n");
    while (!isEmpty(&stack)) {
        printf("%d\n", pop(&stack));
    }

    return 0;
}
