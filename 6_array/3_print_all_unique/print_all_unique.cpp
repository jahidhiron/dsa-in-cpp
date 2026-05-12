#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 6, 1, 6, 8, 3, 9, 2};
    const int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueItems[size];
    int uniqueItemIndex = 0;

    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueItems[uniqueItemIndex] = arr[i];
            uniqueItemIndex++;
        }
    }

    for (int i = 0; i < uniqueItemIndex; i++) {
        cout << uniqueItems[i] << " ";
    }

    cout << endl;

    return 0;
}