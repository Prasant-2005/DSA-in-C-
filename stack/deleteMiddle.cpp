#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size) {
    // Base case
    if (count == size / 2) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N) {
    int count = 0;
    solve(inputStack, count, N);
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

    // Call deleteMiddle
    deleteMiddle(s, s.size());

    // Display modified stack
    cout << "Stack after deleting middle element (top to bottom): ";
    temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
