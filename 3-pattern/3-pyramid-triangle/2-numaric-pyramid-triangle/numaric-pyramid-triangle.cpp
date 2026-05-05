#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++){
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++){
            cout << j + 1 << " ";
        }

        for (int j = i; j > 0; j--){
            cout << j << " ";
        }

        cout << endl;
    }
    
    return 0;
}