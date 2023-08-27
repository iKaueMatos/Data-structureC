#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
#define SIZE 2
#define NUMS_TO_GENERATE 1

/*Inicialize game*/
void divination(int value, const char *name) {
    printf("***************************\n");
    printf("Welcome to the game, %s!\n", name);
    printf("***************************\n");
    printf("*****Number random is gerador*****\n");
    comparable(value);
}

int isNumberEmpty(int number, int sentinel) {
    return number == sentinel;
}

int isStringEmpty(const char *str) {
    return strlen(str) == 0;
}

int randomNumberGenerator() {
     srand(time(NULL));

    for (int i = 0; i < NUMS_TO_GENERATE; i++){
        printf("%d\n", rand() % MAX);
    }

    return EXIT_SUCCESS;
}

int isValidation(int valueNumberOne, const char *name) {
    int emptyNumber = -1;

    if (valueNumberOne < 0) {
        printf("Error number < 0\n");
        return;
    }

     if (isNumberEmpty(valueNumberOne, emptyNumber) && isStringEmpty(name)) {
        printf("Error empty\n");
        return;
    }

    divination(valueNumberOne, name);
}

int comparable(int value) {
    int numberSort = randomNumberGenerator();

    if (value != numberSort) {
        printf("ERROR\n");
        printf("his kick was:%d",value);
        printf("randomly generated number:%d", numberSort);
        return;
    }

    printf("congratulations you got it right the numbers are the same!!\n");
    printf("Your number is the same as the one drawn:%d", value);
}


int main() {
    int someNumber;
    char someName[20];

    printf("Enter your name:");
    scanf("%s", &someName);
    printf("Enter your kick number:");
    scanf("%d", &someNumber);
    isValidation(someNumber, someName);
    return 0;
}
