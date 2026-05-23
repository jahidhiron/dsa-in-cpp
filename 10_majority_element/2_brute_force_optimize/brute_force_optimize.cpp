#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int moresVotingAlgorithm(vector<int> nums) {
    int n = nums.size();

    // sort -> O(n log n)
    sort(nums.begin(), nums.end());

    // Linear -> O(n)
    int frequency = 1, result = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            frequency++;
        } else {
            frequency = 1;
            result = nums[i];
        }

        if (frequency > (n / 2)) {
            return result;
        }
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