#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col - 1;
        
        while(rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return true;  // Return true if element is found
            }
            
            if(element < target) {
                rowIndex++;  // Move down if element is smaller than target
            } else {
                colIndex--;  // Move left if element is larger than target
            }
        }
        return false;  // Return false if element is not found
    }
};

int main() {
    Solution solution;
    
    // Example matrix and target
    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };
    
    int target = 5;
    
    // Call the searchMatrix method and print the result
    bool found = solution.searchMatrix(matrix, target);
    if (found) {
        cout << "Target " << target << " found!" << endl;
    } else {
        cout << "Target " << target << " not found!" << endl;
    }
    
    return 0;
}
