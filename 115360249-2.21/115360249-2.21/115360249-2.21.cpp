#include <iostream>
#include <string>
using namespace std;

int main() {
    string shapes[] = {
        "*********     ***       *        *    ",
        "*       *   *     *    ***      * *   ",
        "*       *  *       *  *****    *   *  ",
        "*       *  *       *    *     *     * ",
        "*       *  *       *    *    *       *",
        "*       *  *       *    *     *     * ",
        "*       *  *       *    *      *   *  ",
        "*       *   *     *     *       * *   ",
        "*********     ***       *        *    "
    };

    for (int i = 0; i < 9; i++) {
        cout << shapes[i] << endl;
    }

    return 0;
}