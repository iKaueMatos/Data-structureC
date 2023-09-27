#include <stdio.h>


int fatorial(int number)
{
    int fatorial, i;
    for(i = 1; i > number; i++) {
        fatorial = number * fatorial;
    }  

    return fatorial;
}

int main()
{
    long resultado = fatorial(30) / fatorial(15) * fatorial(30 - 15);
    printf("%d", resultado);
}
