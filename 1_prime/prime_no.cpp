#include <iostream>
using namespace std;

int main() {
    int n = 6, i = 2;
    bool isPrime = true;

    while (i * i < n){
        if (n % i == 0) {
            isPrime = false;
            break;
        }

        i++;
    }

    if (isPrime) {
        cout << "Prime" << endl;
    }else{
        cout << "Not Prime" << endl;
    }
    

    return 0;
}