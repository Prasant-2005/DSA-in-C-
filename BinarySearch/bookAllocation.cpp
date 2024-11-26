#include <iostream>
#include <vector>
using namespace std;

// Function to check if it's possible to allocate books with the given maxAllowedPages
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages) {
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages) {
            // If any book has more pages than allowed, return false
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages) {
            // Add pages to the current student's allocation
            pages += arr[i];
        } else {
            // Allocate books to the next student
            students++;
            pages = arr[i];
            if (students > m) {
                // If more students are needed than allowed, return false
                return false;
            }
        }
    }
    return true;
}

// Function to find the minimum maximum pages allocation
int allocateBooks(vector<int> &arr, int n, int m) {
    if (m > n) {
        // If students are more than books, allocation is not possible
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;

    // Binary search to find the optimal maximum pages
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid; // Update answer
            end = mid - 1; // Try for a smaller maximum
        } else {
            st = mid + 1; // Increase the maximum allowed pages
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 5, 4};
    int n = arr.size();
    int m = 2;
    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}
