#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT_MIN;

    for (int start=0; start < size; start++) {
        for (int end=start; end < size; end++) {
            int temp = 0;
            for (int i = start; i <= end; i++) {
                cout << arr[i] << ",";
                temp += arr[i];
            }
            if (temp > maxSum) {
                maxSum = temp;
            }
            cout << " ";
        }
        cout << endl;
    }

    cout << "Max sub array sum = " << maxSum << endl;

    return 0;
}