#include <iostream>
#include <algorithm> // For sort function
using namespace std;

// Function to print an array
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Recursive binary search function
bool binarySearch(int arr[], int s, int e, int k) {
    // Base case: element not found
    if (s > e) {
        return false;
    }
    
    // Print the current array range
    int n = e - s + 1;
    print(arr + s, n);
    
    // Find the middle element
    int mid = s + (e - s) / 2;
    
    // Check if the middle element is the key
    if (arr[mid] == k) {
        return true;
    }
    
    // Recursive cases
    if (arr[mid] < k) {
        return binarySearch(arr, mid + 1, e, k);
    } else {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[5] = {14, 23, 45, 12, 68};
    int n = 5;
    int key = 68;

    // Sort the array for binary search
    sort(arr, arr + n);
    cout << "Sorted array: ";
    print(arr, n);

    // Perform binary search
    bool ans = binarySearch(arr, 0, n - 1, key);

    // Output the result
    cout << "Element found: " << (ans ? "Yes" : "No") << endl;

    return 0;
}
