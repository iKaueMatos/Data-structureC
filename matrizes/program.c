#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_L 5 //4
#define NUM_C 4 //3

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    int row, collumn;

    float notes[NUM_L][NUM_C] = {{ 7.4, 6.8, 9.6,  6.7  },
                                 { 7.8, 6.7, 9.6,  6.7  },
                                 { 7.9, 6.1, 10.3, 6.7  },
                                 { 7.3, 6.2, 10.9, 6.7  },
                                 { 7.6, 6.3, 10.8, 6.7  },
                                 { 7.7, 6.4, 10.3, 6.7  }};

    for (row = 0; row < NUM_L; row++) {
        for (collumn = 0; collumn < NUM_C; collumn++) {
            printf("%5.1f", notes[row][collumn]);
        }
        printf("\n");
    }

    printf("\n Valor do elemento na 2° linha, 3º coluna: %4.2f\n", notes[1][3]);
    return 0;
}
