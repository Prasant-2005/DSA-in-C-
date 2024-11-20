#include <iostream>
using namespace std;

int printFactorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int nCr(int n, int r)
{
    int numerator = printFactorial(n);
    int denominator = printFactorial(n - r) * printFactorial(r);
    return (numerator / denominator);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << "The answer is " << nCr(n, r) << endl;
    return 0;
}
