#include <stdio.h>
 
int main(int argc, char const *argv[])
{
    int vetor[10] = {10, 20, 30, 40, 50, 60, 80, 90, 10, 40};
    int count = 10;
    int init;

    for (init = 0; init < count; init++){
        printf("%d", vetor[init]);
        printf("\n");
    }
    return 0;
}
