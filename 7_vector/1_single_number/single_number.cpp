#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {4, 1, 2, 4, 1};
    int result = 0;

    for (int val : vec) {
        result ^= val;
    }

    cout << "Result : " << result;

    return 0;
}