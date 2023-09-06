#include <stdio.h>
#define LIN 2
#define COL 2

int main()
{
    int *matriz;
    int init;
    //Alocação dinámica
    matriz = (int*)malloc(LIN * COL * sizeof(int));

    if (matriz == NULL) {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    for (init = 0; init < LIN * COL; init++) {
        matriz[init] = init;
    }

    //Acessar o elemento da primeira linha e segunda coluna
    // k = i*n + j -> k = i* LIN*COL + j
    int indice = 0 * LIN * COL + 1;
    printf("%d\n", matriz[2]);
    return 0;
}
