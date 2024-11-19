#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a string! " << endl;
    cin >> ch;
     if (ch >= 'a' && ch <= 'z'){
    cout << "Entered character is a Lowercase and the value is " << ch << endl; 
  }
  else if (ch >='A' && ch <= 'Z'){
    cout << "Entered character is a Uppercase and the value is " << ch << endl; 
  }
  else {
    cout << "Entered character is a Numeric and the value is " << ch << endl;
  }
} 



