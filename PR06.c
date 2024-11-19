//This program is prepared by 24CE008

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Initialize two fixed numbers
    num1 = 20.0;
    num2 = 10.0;

    // Get the arithmetic operator from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result of %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result of %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result of %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please enter +, -, *, or /.\n");
    }
    printf("\n24CE008_Ansh");


    return 0;
}

