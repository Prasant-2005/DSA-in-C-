#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else {
            // `ch` is either `)` or a lowercase letter
            if (ch == ')') {
                bool isRedundant = true;

                while (st.top() != '(') {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop();
                }

                if (isRedundant == true)
                    return true;

                st.pop(); // Pop the opening '('
            }
        }
    }
    return false;
}

int main() {
    // Test cases
    string expression1 = "((a+b))";
    string expression2 = "(a+(b)/c)";
    string expression3 = "(a+b*(c-d))";

    // Print results
    cout << "Expression: " << expression1 
         << " -> Contains redundant brackets: " 
         << (findRedundantBrackets(expression1) ? "Yes" : "No") << endl;

    cout << "Expression: " << expression2 
         << " -> Contains redundant brackets: " 
         << (findRedundantBrackets(expression2) ? "Yes" : "No") << endl;

    cout << "Expression: " << expression3 
         << " -> Contains redundant brackets: " 
         << (findRedundantBrackets(expression3) ? "Yes" : "No") << endl;

    return 0;
}
