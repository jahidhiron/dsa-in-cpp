#include <iostream>
using namespace std;

int main() {
    int size = 5;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "* ";
        }

        for (int j = 0; j < (2 * size - 2 * i - 2); j++){
            cout << "  ";
        }

        for(int j = 0; j < i + 1; j++){
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 0; i < size; i++){
        for (int j = size - i; j > 0; j--){
            cout << "* ";
        }

        for (int j = 0; j < 2 * i; j++){
            cout << "  ";
        }

        for (int j = size - i; j > 0; j--){
            cout << "* ";
        }

        cout << endl;
    }
    
    return 0;
}