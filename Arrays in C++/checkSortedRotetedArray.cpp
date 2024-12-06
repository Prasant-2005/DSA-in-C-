#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0; // Counter to track "violations" of the sorted order.

        // Step 1: Traverse the array to find where the order is violated.
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) // If the current element is less than the previous
                cnt++; // Increment the counter for a violation
        }

        // Step 2: Check the "wrap-around" condition.
        // If the last element is greater than the first, this could also be a violation.
        if (nums[nums.size() - 1] > nums[0])
            cnt++;

        // Step 3: Return true if there is at most one violation.
        return cnt <= 1;
    }
};

int main() {
    Solution solution; // Create an instance of the Solution class.

    vector<int> nums1 = {3, 4, 5, 1, 2}; // Test case 1
    vector<int> nums2 = {2, 1, 3, 4};    // Test case 2
    vector<int> nums3 = {1, 2, 3, 4, 5}; // Test case 3

    cout << "Is nums1 a rotated sorted array? " << (solution.check(nums1) ? "Yes" : "No") << endl;
    cout << "Is nums2 a rotated sorted array? " << (solution.check(nums2) ? "Yes" : "No") << endl;
    cout << "Is nums3 a rotated sorted array? " << (solution.check(nums3) ? "Yes" : "No") << endl;

    return 0;
}
