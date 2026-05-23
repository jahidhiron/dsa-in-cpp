#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int moresVotingAlgorithm(vector<int> nums) {
    int n = nums.size();
    int frequency = 0, result = 0;

    for (int val : nums) {
        if (frequency == 0) {
            result = val;
        }

        if(result == val) {
            frequency++;
        }else {
            frequency --;
        }
    }

    int count = 0;
    for (int val : nums) {
        if (result == val) {
            count++;
        }
    }

    if (count > (n / 2)) {
        return result;
    }

    return -1;
}

int main() {
    vector<int> vec = {0, 1, 2, 2, 0, 2, 1, 2, 2}; 

    // Time Complexity -> O (n)
    int element = moresVotingAlgorithm(vec);

   cout << element << endl;

    return 0;
}