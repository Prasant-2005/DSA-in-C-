#include <iostream>
#include <stack>
#include <string>
using namespace std;

int findMinimumCost(string str) {
    // Odd length condition
    if (str.length() % 2 == 1) {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        if (ch == '{') {
            s.push(ch);
        } else {
            // `ch` is a closing brace
            if (!s.empty() && s.top() == '{') {
                s.pop();
            } else {
                s.push(ch);
            }
        }
    }

    // Stack contains invalid expressions
    int a = 0, b = 0;
    while (!s.empty()) {
        if (s.top() == '{') {
            b++;
        } else {
            a++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main() {
    // Test cases
    string str1 = "{{{{";
    string str2 = "{{{{}}";
    string str3 = "{{{{}}}}";
    string str4 = "{{}{{}}{{";

    // Print results
    cout << "Minimum cost to balance \"" << str1 << "\": " << findMinimumCost(str1) << endl;
    cout << "Minimum cost to balance \"" << str2 << "\": " << findMinimumCost(str2) << endl;
    cout << "Minimum cost to balance \"" << str3 << "\": " << findMinimumCost(str3) << endl;
    cout << "Minimum cost to balance \"" << str4 << "\": " << findMinimumCost(str4) << endl;

    return 0;
}   
