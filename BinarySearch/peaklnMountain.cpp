#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int find_pivot(vector<int>& v) {
        int s = 0, e = v.size() - 1;
        int mid = s + (e - s) / 2; // Prevent integer overflow
        while (s < e) {
            if (v[mid] < v[mid + 1]) {
                s = mid + 1; // Move to the right half
            } else {
                e = mid; // Move to the left half
            }
            mid = s + (e - s) / 2;
        }
        return s; // `s` and `e` will converge at the peak
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};

int main() {
    Solution solution;
    vector<int> arr = {0, 2, 1, 0}; // Example mountain array
    int peakIndex = solution.peakIndexInMountainArray(arr);
    cout << "The peak index is: " << peakIndex << endl; // Should print 3
    return 0;
}
