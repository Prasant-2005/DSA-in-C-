#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping[]) {
        // Base case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;

        string output;
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution sol;

    // Input: A string of digits
    string digits = "23";

    // Get the letter combinations
    vector<string> result = sol.letterCombinations(digits);

    // Print the results
    cout << "Letter combinations for digits \"" << digits << "\":" << endl;
    for (const string& combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
