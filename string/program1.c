#include <stdio.h>
#include <string.h>

// int type(char c) 
// {
//     if (c < '0' || c > '9') {
//         return 1;
//     }
//     return 0;
// }

int main(int argc, char *argv[])
{
    char name[] = "Kauê de matos";
    int size = strlen(name);
    int i = 0;
    
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }
    
    return 0;
}

