#include <iostream>
using namespace std;

int main() {
    int size = 5;
    char ch = 'A';

    for (int i = 0; i < size; i++) {

        for (int j = 0; j < i+1; j++){
            cout << ch << " ";
            ch++;
        }

        cout << endl;
    }
    
    return 0;
}