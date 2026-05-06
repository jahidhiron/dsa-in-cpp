#include <iostream>
using namespace std;

int main() {
    int size = 5;

    for (int i = 0; i < size; i++) {
        char ch = 'A';

        for (int j = 0; j < i+1; j++){
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    
    return 0;
}