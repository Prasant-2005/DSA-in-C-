#include <iostream>
using namespace std;

int sayDigit(int n, string arr[])
{
    if (n == 0)
    {
        return 0;
    }
    int digit = n % 10;
    n = n / 10;
    sayDigit(n, arr);
    cout << arr[digit] << " " << endl;
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three",
                      "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    cout << endl
         << endl
         << endl;
    sayDigit(n, arr);
    cout << endl
         << endl
         << endl;

    return 0;
}