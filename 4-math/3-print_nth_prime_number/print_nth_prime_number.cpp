#include <iostream>
using namespace std;

int primeNumber(int n){
    for (int i = 2; i * i <= n; i++){
        if(n %i == 0){
            return false;
            break;
        }
    }

    return true;
}

int main() {
    int n = 100;

    for (int i = 2; i <= n; i++){
        int isPrime = primeNumber(i);
        if (isPrime) {
            cout << i << ", ";
        }
    }

    cout << endl;

    return 0;
}