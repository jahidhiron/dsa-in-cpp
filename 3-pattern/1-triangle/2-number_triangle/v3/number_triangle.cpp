#include <iostream>
using namespace std;

int main() {
    int size = 4;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j > 0; j--){
            cout << j << " ";
        }

        cout << endl;
    }
    
    return 0;
}