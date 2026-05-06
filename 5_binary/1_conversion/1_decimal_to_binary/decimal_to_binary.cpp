#include <iostream>
using namespace std;

int decimalToBinary(int n){
    int power = 1;
    int binary = 0;
    while (n > 0) {
        int remainder = n % 2;
        n = n / 2;
        binary += remainder * power;
        power *= 10;
    }
    return binary;
}

int main() {
    cout << decimalToBinary(42) << endl;

    return 0;
}