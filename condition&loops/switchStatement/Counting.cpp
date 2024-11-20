#include <iostream>
using namespace std;

void printCounting(int num)
{

    for (int i = 1; i <= num; i++)
    {
        cout << i << " " << endl;
    }
    cout << endl;
}
int main()
{

int n;
cout << "Enter a number n: " << endl;
cin >> n;
printCounting(n);
return 0;
}
