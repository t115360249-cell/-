#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    int rateStep;

    // 使用整數計數 100 到 120 (代表 10.0% 到 12.0%) 以避免浮點數迴圈誤差
    for (rateStep = 100; rateStep <= 120; rateStep += 5) {
        double rate = rateStep / 1000.0;
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (unsigned int year = 1; year <= 15; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%21.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}