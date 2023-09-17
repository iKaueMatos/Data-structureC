#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha* pilha = createStack();

    push(pilha, 10.0);
    push(pilha, 20.0);
    printf("Topo: %.2f\n", top(pilha));
    printf("Pop: %.2f\n", pop(pilha));
    printf("Pop: %.2f\n", pop(pilha));

    freeStack(pilha);

    return 0;
}
