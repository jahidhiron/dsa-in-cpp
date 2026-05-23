#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> pair;
    int size = nums.size();
    int start = 0, end = size - 1; 

    for(int i = 0; i < size; i++) {
        int sum = nums[start] + nums[end];
        if (sum > target) {
            end--;
        } else if (sum < target) {
            start++;
        } else {
            pair.push_back(start);
            pair.push_back(end);
            break;
        }
    }

    return pair;
}

int main() {
    vector<int> vec = {3, 9, 11, 15};
    int target = 18;
    vector<int> pair = pairSum(vec, target);

    for (int val:pair){
        cout << val << ", ";
    }
    cout << endl;

    return 0;
}