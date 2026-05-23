#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> nums) {
    int n = nums.size();

    for(int val: nums) {
        int frequency = 0;
        for (int el: nums) {
            if(el == val) {
                frequency++;
            }
        }
        
        if(frequency > n / 2) {
            return val;
        }
    }

    return -1;
}

int main() {
    vector<int> vec = {1, 2, 1, 2, 1};
    int target = 18;
    int element = majorityElement(vec);

   cout << element << endl;

    return 0;
}