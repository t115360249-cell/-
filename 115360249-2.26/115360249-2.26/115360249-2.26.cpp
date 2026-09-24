#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "請輸入第一個整數: ";
    cin >> num1;
    cout << "請輸入第二個整數: ";
    cin >> num2;

    if (num1 % num2 == 0) {
        cout << num1 << " 是 " << num2 << " 的倍數" << endl;
    }
    else {
        cout << num1 << " 不是 " << num2 << " 的倍數" << endl;
    }

    return 0;
}