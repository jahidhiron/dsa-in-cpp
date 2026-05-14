#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec = {1, 2, 3};

    cout << vec.front() << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    cout << vec.at(1) << endl;
}