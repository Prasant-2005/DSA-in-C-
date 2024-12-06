#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n; // To handle cases where k > n
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }
    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}

int main() {
    vector<int> nums = {4, 6, 5, 10, 45};
    int k = 1;
    
    rotate(nums, k);
    cout << "Rotated Array is: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
