#include <iostream>
using namespace std;

int main() {
    double totalMiles;
    double costPerGallon;
    double milesPerGallon;
    double parkingFee;
    double tolls;

    cout << "請輸入一整天的總里程數: ";
    cin >> totalMiles;
    cout << "請輸入汽油一加侖多少錢: ";
    cin >> costPerGallon;
    cout << "請輸入平均一加侖能行駛多少英哩: ";
    cin >> milesPerGallon;
    cout << "請輸入一天的停車費: ";
    cin >> parkingFee;
    cout << "請輸入一天的通行費(過路費): ";
    cin >> tolls;

    double totalCost = (totalMiles / milesPerGallon) * costPerGallon + parkingFee + tolls;

    cout << "\n一天下來開車去工作的總花費為: $" << totalCost << endl;

    return 0;
}