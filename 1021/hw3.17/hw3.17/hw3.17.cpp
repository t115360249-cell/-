#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int account;
    double beginningBalance, charges, credits, creditLimit, newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &charges);

        printf("Enter total credits: ");
        scanf("%lf", &credits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit) {
            printf("Account:\t%d\n", account);
            printf("Credit limit:\t%.2f\n", creditLimit);
            printf("Balance:\t%.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }
    return 0;
}
