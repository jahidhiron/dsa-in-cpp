#include <iostream>
using namespace std;

int digitSum (int num){
    if (num == 0) return 0;

    int reminder = num % 10;
    num = num / 10;
    return reminder + digitSum(num);
}

int main() {
    cout << digitSum (12345) << endl;
    return 0;
}