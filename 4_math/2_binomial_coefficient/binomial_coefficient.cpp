#include <iostream>
using namespace std;

int factorial(int n){
    int fac = 1;
    for (int i = 1; i <= n; i++) {
        fac *= i;
    }

    return fac;
}

int nCr(int n, int r){
    int nFac = factorial(n);
    int rFac = factorial(r);
    int nMRFac = factorial(n - r);

    int binomialcoefficient = nFac / (rFac * nMRFac);

    return binomialcoefficient;
}

int main() {
    int n = 6;
    int r = 3;

    cout << nCr(n, r) << endl;

    return 0;
}