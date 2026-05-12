#include <iostream>
#include <climits>
using namespace std;

void swapMinAndMaxNumber(int arr[], int size){
    int minIndex = 0;
    int maxIndex = 0;


    for (int i = 0; i < size; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i  = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
int main() {
    int arr [] = {5, 6, 1, 6, 8, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapMinAndMaxNumber(arr, size);
    
    return 0;
}