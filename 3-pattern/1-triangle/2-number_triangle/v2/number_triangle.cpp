#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int seq = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i+1; j++){
            cout << seq << " ";
            seq++;
        }

        cout << endl;
    }
    
    return 0;
}