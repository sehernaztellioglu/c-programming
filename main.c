#include <ctype.h>
#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>


float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}


int main() {
    float x;
    float y;
    char op;

    while (1) {
        printf("enter a number:");
        scanf("%f", &x);

        printf("select the operation (+, -, /, x):");
        scanf(" %c", &op);

        printf("enter the second number:");
        scanf("%f", &y);

        switch (op) {
            case '+': printf("%f+%f=%f\n", x, y, add(x, y));
                break;
            case '-': printf("%f-%f=%f\n", x, y, subtract(x, y));
                break;
            case '*': printf("%f*%f=%f\n", x, y, multiply(x, y));
                break;
            case '/':
                if (y == 0) {
                    printf("division by zero is not allowed");
                } else {
                    printf("%f/%f=%f\n", x, y, divide(x, y));
                }
                break;
            default: printf("error");
                break;
        }
    }
}







