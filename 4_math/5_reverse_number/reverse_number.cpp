#include <iostream>
using namespace std;

int reverseNumber(int num){
    int multiplier = 1;
    int copy = num;
    int result = 0;

    
    while (copy > 9) {
        multiplier *= 10;
        copy /= 10;
    } 

    while (num > 0) {
        int remainder = num % 10;
        result += remainder * multiplier;
        multiplier /= 10;
        num /= 10;
    }

   return result;
}

int main() {
    cout << reverseNumber(994456789) << endl;
    return 0;
}