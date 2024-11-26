#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it's possible to place k cows with a minimum distance of 'mid'
bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    int cowCount = 1;        // Place the first cow at the first stall
    int lastPos = stalls[0]; // Track the position of the last placed cow
    
    for (int i = 1; i < n; i++) {
        // If the distance between the current stall and the last stall is >= mid
        if (stalls[i] - lastPos >= mid) {
            cowCount++;         // Place a cow here
            lastPos = stalls[i]; // Update the last position
            if (cowCount == k) { // If all cows are placed, return true
                return true;
            }
        }
    }
    return false; // If we cannot place all k cows, return false
}

// Function to find the maximum minimum distance using binary search
int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Sort the stall positions
    
    int s = 1;                // Minimum possible distance
    int n = stalls.size();
    int e = stalls[n - 1] - stalls[0]; // Maximum possible distance
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate the middle distance

        if (isPossible(stalls, k, mid, n)) {
            ans = mid;   // If it is possible, update the answer
            s = mid + 1; // Try for a larger distance
        } else {
            e = mid - 1; // Try for a smaller distance
        }
    }
    return ans; // Return the maximum minimum distance
}

int main() {
    vector<int> stalls = {4, 2, 1, 3, 6}; // Stall positions
    int k = 3;                            // Number of cows
    cout << "The largest minimum distance is: " << aggressiveCows(stalls, k) << endl;
    return 0;
}
