#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>>& arr, int nRows, int mCols) {
    vector<int> ans;
    
    for(int col = 0; col < mCols; col++) {
        
        if( col & 1 ) {
            // Odd index -> Bottom to top
            for(int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }    
        }
        else {
            // Even index -> Top to bottom
            for(int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }   
    }
    return ans;
}

int main() {
    // Example 2D array
    int nRows = 4, mCols = 4;
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    // Call the wavePrint function and store the result
    vector<int> result = wavePrint(arr, nRows, mCols);
    
    // Output the result
    cout << "Wave Print: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
