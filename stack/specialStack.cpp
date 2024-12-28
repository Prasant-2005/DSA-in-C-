#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class SpecialStack {
    // Define the data members.
    stack<int> s;
    int mini = INT_MAX;

    /*----------------- Public Functions of SpecialStack -----------------*/
public:
    void push(int data) {
        // For the first element
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                s.push(2 * data - mini);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    int pop() {
        if (s.empty()) {
            return -1;
        }

        int curr = s.top();
        s.pop();
        if (curr > mini) {
            return curr;
        } else {
            int prevMin = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if (s.empty())
            return -1;

        int curr = s.top();
        if (curr < mini) {
            return mini;
        } else {
            return curr;
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if (s.empty())
            return -1;

        return mini;
    }
};

int main() {
    SpecialStack s;

    s.push(10);
    s.push(5);
    s.push(20);

    cout << "Top element: " << s.top() << endl;           // Should print 20
    cout << "Minimum element: " << s.getMin() << endl;   // Should print 5

    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should print 5
    cout << "Minimum element after pop: " << s.getMin() << endl; // Should print 5

    s.pop();
    cout << "Top element after second pop: " << s.top() << endl; // Should print 10
    cout << "Minimum element after second pop: " << s.getMin() << endl; // Should print 10

    s.pop();
    cout << "Stack empty: " << (s.isEmpty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;
}
