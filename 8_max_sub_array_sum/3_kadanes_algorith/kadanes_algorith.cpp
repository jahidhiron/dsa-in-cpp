#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int currentSum = 0, maxSum = INT_MIN;

    for (int val : arr) {
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Max sub array sum = " << maxSum << endl;

    return 0;
}