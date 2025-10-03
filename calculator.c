#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Simple Calculator in C\n");
    printf("Operations: +, -, *, /\n");

    while(1) {
        printf("\nEnter first number (0 to exit): ");
        scanf("%lf", &num1);
        if(num1 == 0) {
            printf("Exiting Calculator...\n");
            break;
        }

        printf("Enter second number: ");
        scanf("%lf", &num2);

        printf("Enter operation (+, -, *, /): ");
        scanf(" %c", &op); // note the space before %c

        switch(op) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid operation!\n");
        }
    }

    return 0;
}