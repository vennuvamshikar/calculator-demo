#include "calculator.h"
#include <stdio.h>

double calculate(char operator, double num1, double num2) {
    switch (operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return (num2 != 0) ? num1 / num2 : 0.0;
        default: return 0.0;
    }
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    result = calculate(operator, num1, num2);

    if (operator == '/' && num2 == 0)
        printf("Error! Division by zero.\n");
    else
        printf("Result: %.2lf\n", result);

    return 0;
}
