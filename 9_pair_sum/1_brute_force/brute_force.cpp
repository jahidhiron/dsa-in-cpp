#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> pair;
    int size = nums.size();

    for(int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }

    return pair;
}

int main() {
    vector<int> vec = {3, 9, 11, 15};
    int target = 20;
    vector<int> pair = pairSum(vec, target);

    for (int val:pair){
        cout << val << ", ";
    }
    cout << endl;

    return 0;
}