#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "請輸入第 1 個整數: ";
    cin >> num;

    int largest = num;
    int smallest = num;

    for (int i = 2; i <= 3; i++) {
        cout << "請輸入第 " << i << " 個整數: ";
        cin >> num;

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }
    }

    cout << "最大值是: " << largest << endl;
    cout << "最小值是: " << smallest << endl;

    return 0;
}