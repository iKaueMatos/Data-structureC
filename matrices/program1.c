//Vetor uma unica dimensão ou seja uma simples linha
//Matriz tem um coluna e um linha formando assim um matriz -> bidemencional

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_L 5 //4
#define NUM_C 4 //3


int comparable (const void *a, const void *b) {
    int *rowA = *(const int **)a;
    int *rowB = *(const int **)b; 

    return rowA[0] - rowB[0];
}


int main()
{

    int matriz[][3] = {
        {3, 2, 1},
        {6, 5, 4},
        {9, 8, 7}
    };

    int linhas = sizeof(matriz) / sizeof(matriz[0]);
    int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    qsort(matriz, linhas, sizeof(matriz[0]), comparable);

    printf("Matriz Ordenada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
