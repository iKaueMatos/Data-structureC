#include <stdio.h>

int performOperation(int numberOne, int numberTwo, char operator) {
    int result = 0;

    if (numberOne != 0 && numberTwo != 0) {
        switch (operator) {
            case '+':
                result = numberOne + numberTwo;
                break;
            case '-':
                result = numberOne - numberTwo;
                break;
            case '*':
                result = numberOne * numberTwo;
                break;
            case '/':
                result = numberOne / numberTwo;
                break;
            default:
                printf("Operação inválida.\n");
        }
    }

    return result;
}

int main() {
    int numberOne = 10;
    int numberTwo = 5;

    char operation = '*';
    int result = performOperation(numberOne, numberTwo, operation);

    if (result != 0) {
        printf("O resultado da operação é: %d\n", result);
    } else {
        printf("Operação não pôde ser realizada.\n");
    }

    return 0;
}
