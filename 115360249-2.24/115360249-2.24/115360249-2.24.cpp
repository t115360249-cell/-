#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "請輸入一個整數: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " 是偶數 (Even)" << endl;
    }
    else {
        cout << number << " 是奇數 (Odd)" << endl;
    }

    return 0;
}