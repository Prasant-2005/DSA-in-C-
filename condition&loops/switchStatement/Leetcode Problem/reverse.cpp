#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int digit = x % 10;

        // Check for overflow/underflow
        if (ans < INT_MIN / 10 || ans > INT_MAX / 10) {
            return 0; // Return 0 in case of overflow
        }

        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    int result = reverse(num);
    cout << "Reversed number: " << result << endl;

    return 0;
}
