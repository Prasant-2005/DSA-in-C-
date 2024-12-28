#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element in the sorted stack
void sortedInsert(stack<int> &stack, int num) {
    // Base case: if stack is empty or the top of the stack is smaller than the current number
    if (stack.empty() || (!stack.empty() && stack.top() < num)) {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();

    // Recursive call to find the correct position for 'num'
    sortedInsert(stack, num);

    // Push the previously removed element back
    stack.push(n);
}

// Function to sort the stack
void sortStack(stack<int> &stack) {
    // Base case: if stack is empty, return
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call to sort the remaining stack
    sortStack(stack);

    // Insert the popped element in the correct sorted position
    sortedInsert(stack, num);
}

int main() {
    // Create a stack and push elements
    stack<int> s;
    s.push(30);
    s.push(10);
    s.push(50);
    s.push(20);
    s.push(40);

    // Display original stack
    cout << "Original stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Sort the stack
    sortStack(s);

    // Display sorted stack
    cout << "Sorted stack (top to bottom): ";
    temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
