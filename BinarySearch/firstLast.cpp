#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; // Search in the left half
        } else if (key > arr[mid]) { // Move to the right half
            s = mid + 1;
        } else { // Move to the left half
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1; // Search in the right half
        } else if (key > arr[mid]) { // Move to the right half
            s = mid + 1;
        } else { // Move to the left half
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main() {
    // Input array
    vector<int> arr = {2, 4, 4, 4, 6, 8};
    int n = arr.size();
    
    // Key to search
    int key;
    cout << "Enter the key to find: ";
    cin >> key;

    // Find first and last occurrences
    pair<int, int> result = firstAndLastPosition(arr, n, key);

    // Output results
    if (result.first == -1 && result.second == -1) {
        cout << "Key " << key << " not found in the array." << endl;
    } else {
        cout << "First occurrence of " << key << ": " << result.first << endl;
        cout << "Last occurrence of " << key << ": " << result.second << endl;
    }

    return 0;
}
