
#include <iostream>
using namespace std;

// Function to calculate the Hamming Weight (number of 1s in binary representation)
int hammingWeight(int n) {
    int count = 0; // Initialize counter for number of 1 bits

    // Loop until all bits in n have been processed
    while (n != 0) {
        // Check if the last bit is 1
        if (n & 1) {
            count++; // Increment the counter if the last bit is 1
        }
        // Right-shift n to remove the last bit
        n = n >> 1;
    }

    return count; // Return the total count of 1 bits
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Call the hammingWeight function and display the result
    int result = hammingWeight(n);
    cout << "Hamming Weight (Number of 1s in binary representation): " << result << endl;

    return 0; // Indicate successful program execution
}
