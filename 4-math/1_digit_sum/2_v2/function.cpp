#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int digitSum = 0;

    while (num > 0) {
        digitSum += num % 10;
        num = num / 10;
    }

    cout << digitSum << endl;

    return 0;
}