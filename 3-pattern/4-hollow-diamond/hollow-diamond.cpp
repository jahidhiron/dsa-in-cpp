#include <iostream>
using namespace std;

int main() {
    int size = 5;
    
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size - i - 1; j++){
            cout << "  ";
        }
        cout << "* ";

        if(i != 0){
            for (int j = 0; j < 2 * i - 1; j++){
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < i + 1; j++){
            cout << "  ";
        }
        cout << "* ";

        for (int j = 2 * (size - 2 - i) - 1; j > 0; j--){
            cout << "  ";
        }

        if(i != size - 2){
            cout << "* ";
        }

        cout << endl;
    }
    
    return 0;
}