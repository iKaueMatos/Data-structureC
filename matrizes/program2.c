#include <stdio.h>

int main(int argc, char const *argv[])
{
    float matriz[2][2] = {{1, 3},
                          {4, 2}};
    int l, c;

    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            float temp = matriz[l][c] * 2; 
            printf("%.2f\t", temp); 
        }
        printf("\n");
    }
    return 0;
}
