#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int paycode;
    double salary, hourlyWage, hours, sales, pieceWage, pay;
    int pieces;

    printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        switch (paycode) {
        case 1: // Manager
            printf("Enter manager's fixed weekly salary: ");
            scanf("%lf", &salary);
            pay = salary;
            printf("Weekly pay is: $%.2f\n\n", pay);
            break;

        case 2: // Hourly worker
            printf("Enter hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter total hours worked: ");
            scanf("%lf", &hours);
            if (hours <= 40.0) {
                pay = hours * hourlyWage;
            }
            else {
                pay = 40.0 * hourlyWage + (hours - 40.0) * hourlyWage * 1.5;
            }
            printf("Weekly pay is: $%.2f\n\n", pay);
            break;

        case 3: // Commission worker
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            pay = 250.0 + 0.057 * sales;
            printf("Weekly pay is: $%.2f\n\n", pay);
            break;

        case 4: // Pieceworker
            printf("Enter number of items produced: ");
            scanf("%d", &pieces);
            printf("Enter wage per item: ");
            scanf("%lf", &pieceWage);
            pay = pieces * pieceWage;
            printf("Weekly pay is: $%.2f\n\n", pay);
            break;

        default:
            printf("Invalid paycode entered.\n\n");
            break;
        }

        printf("Enter paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, -1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}