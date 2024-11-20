#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number a: " << endl;
    cin >> a;
    cout << "Enter a number b: " << endl;
    cin >> b;
    char op;

    cout << "Enter a operator: " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "Please enter a valid operator " << endl;
    }
    return 0;
}