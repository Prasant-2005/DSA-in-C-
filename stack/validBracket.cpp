#include <iostream>
#include <stack>
using namespace std;

// Function to check if the parentheses are valid
bool isValidParenthesis(string expression) {
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        // If opening bracket, push to stack
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch);
        }
        else {
            // For closing bracket, check stack top and pop
            if (!s.empty()) {
                char top = s.top();
                if ((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') || 
                    (ch == ']' && top == '[')) {
                    s.pop();
                }
                else {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }

    // If stack is empty, all parentheses are balanced
    return s.empty();
}

int main() {
    // Test cases
    string expression1 = "(){}[]";
    string expression2 = "({[)]}";
    string expression3 = "(((())))";
    string expression4 = "{[(])}";
    string expression5 = "";

    // Test case 1: Balanced parentheses
    cout << "Expression: " << expression1 << " -> " 
         << (isValidParenthesis(expression1) ? "Valid" : "Invalid") << endl;

    // Test case 2: Invalid parentheses
    cout << "Expression: " << expression2 << " -> " 
         << (isValidParenthesis(expression2) ? "Valid" : "Invalid") << endl;

    // Test case 3: Balanced parentheses
    cout << "Expression: " << expression3 << " -> " 
         << (isValidParenthesis(expression3) ? "Valid" : "Invalid") << endl;

    // Test case 4: Invalid parentheses
    cout << "Expression: " << expression4 << " -> " 
         << (isValidParenthesis(expression4) ? "Valid" : "Invalid") << endl;

    // Test case 5: Empty string
    cout << "Expression: " << expression5 << " -> " 
         << (isValidParenthesis(expression5) ? "Valid" : "Invalid") << endl;

    return 0;
}
