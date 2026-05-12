#include <iostream>
using namespace std;

bool pow_of_two(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    cout << pow_of_two(8) << endl;

    return 0;
}