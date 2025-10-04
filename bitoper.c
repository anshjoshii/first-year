#include <stdio.h>

// Function to print binary representation of an integer (for 8 bits)
void printBinary(int n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    int x = 6;   // binary: 00000110
    int y = 12;  // binary: 00001100

    printf("x = %d (", x);
    printBinary(x);
    printf(")\n");

    printf("y = %d (", y);
    printBinary(y);
    printf(")\n\n");

    // Bitwise AND
    printf("x & y = %d (", x & y);
    printBinary(x & y);
    printf(")\n");

    // Bitwise OR
    printf("x | y = %d (", x | y);
    printBinary(x | y);
    printf(")\n");

    // Bitwise XOR
    printf("x ^ y = %d (", x ^ y);
    printBinary(x ^ y);
    printf(")\n");

    // Bitwise NOT
    printf("~x = %d (", ~x);
    printBinary(~x);
    printf(")\n");

    printf("~y = %d (", ~y);
    printBinary(~y);
    printf(")\n");

    // Left Shift
    printf("x << 1 = %d (", x << 1);
    printBinary(x << 1);
    printf(")\n");

    printf("y << 1 = %d (", y << 1);
    printBinary(y << 1);
    printf(")\n");

    // Right Shift
    printf("x >> 1 = %d (", x >> 1);
    printBinary(x >> 1);
    printf(")\n");

    printf("y >> 1 = %d (", y >> 1);
    printBinary(y >> 1);
    printf(")\n");

    return 0;
}