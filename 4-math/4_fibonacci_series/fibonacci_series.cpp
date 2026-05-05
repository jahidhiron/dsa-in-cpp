#include <iostream>
using namespace std;

int fibonacciSeries(int n){
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a;
        if (i < n - 1) cout << ", ";
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    fibonacciSeries(6);

    return 0;
}