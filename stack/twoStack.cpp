// #include <iostream>
// #include <stack>
// using namespace std;

// class twoStack{
//     int*arr;
//     int top1;
//     int top2;
//     int size;

//     public:

//     // initialize 
//     twoStack(int s) {
//         this -> size = size;
//         top1 = -1;
//         top2 = s;
//         arr = new int[s];
//     }
//     // insert in stack1
//     void push1(int num){
//         if(top2 - top1 > 1){
//             top1++;
//             arr[top1] = num;
//         }
//     }
//     // insert in stack2
//      void push2(int num){
//         if(top2 - top1 > 1){
//             top2++;
//             arr[top2] = num;
//         }
//     }
//        // Pop from stack 1 and return popped element.
//     int pop1() {
// 		if( top1 >= 0) {
//             int ans = arr[top1];
//             top1--;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }

//     // Pop from stack 2 and return popped element.
//     int pop2() {
// 		if( top2 < size) {
//             int ans = arr[top2];
//             top2++;
//             return ans;
//         }
//         else
//         {
//             return -1;
//         }
//     }
// };

// int main() {
//     twoStack ts(10); // Create two stacks in an array of size 10

//     // Push elements into stack1
//     ts.push1(5);
//     ts.push1(10);
//     ts.push1(15);

//     // Push elements into stack2
//     ts.push2(20);
//     ts.push2(25);
//     ts.push2(30);
//     ts.push2(52);

//     // Pop and display elements from stack1
//     cout << "Popping from stack1: " << ts.pop1() << endl; // 15
//     cout << "Popping from stack1: " << ts.pop1() << endl; // 10

//     // Pop and display elements from stack2
//     cout << "Popping from stack2: " << ts.pop2() << endl; // 30
//     cout << "Popping from stack2: " << ts.pop2() << endl; // 25

//     return 0;
// }
#include <iostream>
using namespace std;

class twoStack {
    int* arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize the twoStack
    twoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Insert in stack1
    void push1(int num) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack1 Overflow" << endl;
        }
    }

    // Insert in stack2
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack2 Overflow" << endl;
        }
    }

    // Pop from stack1 and return popped element
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            cout << "Stack1 Underflow" << endl;
            return -1;
        }
    }

    // Pop from stack2 and return popped element
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            cout << "Stack2 Underflow" << endl;
            return -1;
        }
    }
};

int main() {
    twoStack ts(10); // Create two stacks in an array of size 10

    // Push elements into stack1
    ts.push1(5);
    ts.push1(10);
    ts.push1(15);

    // Push elements into stack2
    ts.push2(20);
    ts.push2(25);
    ts.push2(30);

    // Pop and display elements from stack1
    cout << "Popping from stack1: " << ts.pop1() << endl; // 15
    cout << "Popping from stack1: " << ts.pop1() << endl; // 10

    // Pop and display elements from stack2
    cout << "Popping from stack2: " << ts.pop2() << endl; // 30
    cout << "Popping from stack2: " << ts.pop2() << endl; // 25

    return 0;
}
