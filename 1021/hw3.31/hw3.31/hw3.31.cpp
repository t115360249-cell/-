#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int row, space, star;

    // 上半部 (第 1 到 5 列)
    for (row = 1; row <= 5; row++) {
        for (space = 1; space <= 5 - row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半部 (第 6 到 9 列)
    for (row = 4; row >= 1; row--) {
        for (space = 1; space <= 5 - row; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}