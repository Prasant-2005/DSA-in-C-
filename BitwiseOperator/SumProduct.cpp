#include <iostream>
using namespace std;

// Function to calculate the difference between product and sum of digits
int printSumProduct(int n)
{
    int prod = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int answer = prod - sum;
    return answer;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    // Call the function and display the result
    int result = printSumProduct(n);
    cout << "Result (Product - Sum): " << result << endl;

    return 0;
}
