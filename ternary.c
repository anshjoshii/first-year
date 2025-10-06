#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // Use a nested ternary operator to find the largest number
    // 1. (a > b) is the first condition.
    // 2. If true, it evaluates (a > c ? a : c) to find the larger between a and c.
    // 3. If false, it evaluates (b > c ? b : c) to find the larger between b and c.
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", largest);

    return 0;
}