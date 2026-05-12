#include <iostream>
using namespace std;

int main() {
    int arr1[] = {5, 6, 1, 6, 8, 3, 9, 2};
    int arr2[] = {5, 4, 3, 6, 7, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);


    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;

    return 0;
}