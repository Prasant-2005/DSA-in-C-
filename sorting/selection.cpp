#include <iostream>
#include <algorithm> // For swap
using namespace std;

int main() {
    int arr[5] = {7, 3, 6, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Selection Sort
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Start with the current index
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) { // Find the smallest element
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]); // Swap the smallest element with the current index
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
