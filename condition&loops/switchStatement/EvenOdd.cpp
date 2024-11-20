#include <iostream>
using namespace std;

void printEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is even: " << n << endl;
    }
    else
    {
        cout << "Number is odd: " << n << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    printEvenOdd(n);
    return 0;
}
