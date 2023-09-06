#include <stdio.h>
#include <stdlib.h>

#define LIN 2
#define COL 3

int main()
{
    //Matriz de vetores -> ponteiros dinamica
    int **matriz;
    int i;
    matriz = (int **)malloc(LIN * sizeof(int)); // vetor de ponteiro dinamica

    //fazendo desta forma obtemos abre um vantagem de podemos acessar da mesma forma que quando vamos acessar uma 
    //matriz indicando a sua posição
    for (i = 0; i < LIN; i++) {
        matriz[i] = (int *)malloc(COL * sizeof(int));
    }

    matriz[0][0] = 10;
    matriz[0][1] = 20;

    printf("%d\n",matriz[0][1]);

    for(i = 0; i < LIN; i++) {
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}
