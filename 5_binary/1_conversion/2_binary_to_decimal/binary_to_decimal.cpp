#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int decimal = 0;
    int power = 1;

    while (n > 0) {
        int remainder = n % 10;
        n = n / 10;
        
        decimal += remainder * power;
        power *= 2;
    }

    return decimal;
}

int main() {
    cout << binaryToDecimal(101010) << endl;

    return 0;
}