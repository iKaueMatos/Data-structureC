#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 5
#define NUM_C 4

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    int row, column;

    float notes[NUM_L][NUM_C] = 
    {{ 24.6, 16.3, 15.2, 6.7 },
     { 22.3, 17.4, 12.2, 6.8 },
     { 21.2, 18.8, 11.1, 6.9 },
     { 20.2, 19.6, 9.8, 10.2 },
     { 19.2, 18.0, 10.1, 11.2 } };

    printf("Exibindo o conteudo da matriz declarada e inicializada:\n\n");

    for (row = 0; row < NUM_L; row ++) {
        for (column = 0; column < NUM_C; column++) {
            printf("%5.1f", notes[row][column]);
        }
        printf("\n");
    }
    
    printf("\n Valor do elemento na 2 linha, 3 coluna: %4.2f\n", notes[1][2]);
    return 0;
}
