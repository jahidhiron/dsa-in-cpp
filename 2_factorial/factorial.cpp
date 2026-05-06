#include <iostream>
using namespace std;

int main() {
    int input = 5;
    int fac = 1;

    for(int i = 1; i <= input; i++){
        fac = fac * i;
    }

    cout << "Factorial : " << fac << endl;

    return 0;
}