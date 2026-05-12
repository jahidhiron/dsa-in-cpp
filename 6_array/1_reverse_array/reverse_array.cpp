#include <iostream>
using namespace std;

void swap(int arr[], int start, int end) {
    int temp_el = arr[start];
    arr[start] = arr[end];
    arr[end] = temp_el;
}

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr, start, end);
        start++;
        end--;
    }

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int oddArray[] = {1, 2, 3, 4, 5};
    int evenArray[] = {4, 3, 2, 1};

    int oddArraySize = sizeof(oddArray) / sizeof(oddArray[0]);
    int evenArraySize = sizeof(evenArray) / sizeof(evenArray[0]);

    reverseArray(oddArray, oddArraySize);
    reverseArray(evenArray, evenArraySize);
    
    return 0;
}