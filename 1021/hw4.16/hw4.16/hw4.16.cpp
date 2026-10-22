#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int row, col, space;

    // (A)
    printf("(A)\n");
    for (row = 1; row <= 10; row++) {
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (B)
    printf("(B)\n");
    for (row = 10; row >= 1; row--) {
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (C)
    printf("(C)\n");
    for (row = 10; row >= 1; row--) {
        for (space = 1; space <= 10 - row; space++) {
            printf(" ");
        }
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (D)
    printf("(D)\n");
    for (row = 1; row <= 10; row++) {
        for (space = 1; space <= 10 - row; space++) {
            printf(" ");
        }
        for (col = 1; col <= row; col++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}