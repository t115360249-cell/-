#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int length, breadth;
    int i = 1, j;

    printf("Enter length and breadth: ");
    scanf("%d %d", &length, &breadth);

    while (i <= length) {
        j = 1;
        while (j <= breadth) {
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            }
            else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}