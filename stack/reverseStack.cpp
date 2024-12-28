#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {
    // Base case
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // Recursive call
    insertAtBottom(s, element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // Base case
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

int main() {
    // Create a stack and push elements
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Display original stack
    cout << "Original stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Call reverseStack
    reverseStack(s);

    // Display reversed stack
    cout << "Reversed stack (top to bottom): ";
    temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
