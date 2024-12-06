#include <iostream>
#include <vector>
using namespace std;

// Function to reverse a vector
vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while (s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

// Function to find the sum of two arrays
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    // Add corresponding elements of both arrays
    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // If elements are remaining in the first array
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // If elements are remaining in the second array
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // If there is any carry left
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // Reverse the result to get the final sum
    return reverse(ans);
}

int main() {
    // Test input arrays
    vector<int> a = {9, 9, 9};
    vector<int> b = {1, 4, 6, 4, 2, 3, 4};
    
    // Calculate sizes of the arrays
    int n = a.size();
    int m = b.size();

    // Find the sum of the arrays
    vector<int> result = findArraySum(a, n, b, m);

    // Print the result
    cout << "Sum of the arrays: ";
    for (int num : result) {
        cout << num;
    }
    cout << endl;

    return 0;
}
