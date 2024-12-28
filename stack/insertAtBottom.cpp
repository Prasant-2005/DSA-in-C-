#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &s, int x) {
    // Base case
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    solve(s, x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int> &myStack, int x) {
    solve(myStack, x);
    return myStack;
}

int main() {
    // Create a stack and push elements
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Display original stack
    cout << "Original stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Call pushAtBottom
    int x = 0;
    pushAtBottom(s, x);

    // Display modified stack
    cout << "Stack after pushing " << x << " at the bottom (top to bottom): ";
    temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
