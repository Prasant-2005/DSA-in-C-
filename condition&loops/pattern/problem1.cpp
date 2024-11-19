#include <iostream>
using namespace std;

int main() {
    int n;
    int i = 1; // Initialize `i`
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n; // Input value for `n`

    while (i <= n) { // Loop from 1 to `n`5
        sum = sum + i;
        i = i + 1;
    }

    cout << "The Sum is: " << sum << endl;

    return 0; // Indicate successful execution
}
