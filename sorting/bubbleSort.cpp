#include <iostream>
#include <algorithm> // For swap
using namespace std;

void bubbleSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break; // Array is already sorted
        }
    }
}

int main() {
    int arr[5] = {7, 5, 6, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    bubbleSort(arr, n); // Call bubbleSort
    for (int i = 0; i < n; i++) { // Print sorted array
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
