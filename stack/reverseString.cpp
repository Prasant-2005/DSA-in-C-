#include <iostream>
#include <stack>
using namespace std;

// Function to reverse a string using a stack
string reverseString(const string &str) {
    stack<char> s;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while (!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    return ans;
}

int main() {
    // Test case 1
    string str1 = "babbar";
    cout << "Original string: " << str1 << endl;
    cout << "Reversed string: " << reverseString(str1) << endl;

    // Test case 2
    string str2 = "hello";
    cout << "Original string: " << str2 << endl;
    cout << "Reversed string: " << reverseString(str2) << endl;

    // Test case 3
    string str3 = "stack";
    cout << "Original string: " << str3 << endl;
    cout << "Reversed string: " << reverseString(str3) << endl;

    return 0;
}
