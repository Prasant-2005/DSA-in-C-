#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}