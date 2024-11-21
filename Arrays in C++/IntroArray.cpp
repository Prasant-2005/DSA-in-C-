#include <iostream>
using namespace std;

void printArrayValue(int array[], int size) {
    cout << "Printing the array values:" << endl;
    // Correct loop condition and complete cout statement
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl; // For better formatting
    cout << "Printing done" << endl;
}

int main() {
    int number[15] = {0}; // Initialize all elements to 0
    cout << "Value at index 1 (initialized to 0): " << number[1] << endl;

    int array[3] = {3, 5, 6};
    cout << "Value at index 1: " << array[1] << endl;

    // Call the function to print the array values
    printArrayValue(array, 10);

    return 0;
}
