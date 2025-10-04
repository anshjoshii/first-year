#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("\n--- Scientific Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root (√x)\n");
        printf("7. Sine (sin)\n");
        printf("8. Cosine (cos)\n");
        printf("9. Tangent (tan)\n");
        printf("10. Logarithm base e (ln)\n");
        printf("11. Logarithm base 10 (log10)\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0)
                    printf("Error: Division by zero!\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 < 0)
                    printf("Error: Square root of negative number!\n");
                else {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 7:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                result = sin(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 8:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                result = cos(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 9:
                printf("Enter angle in radians: ");
                scanf("%lf", &num1);
                result = tan(num1);
                printf("Result: %.2lf\n", result);
                break;
            case 10:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error: log undefined for <= 0\n");
                else {
                    result = log(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 11:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 <= 0)
                    printf("Error: log10 undefined for <= 0\n");
                else {
                    result = log10(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;
            case 12:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (1);

    return 0;
}