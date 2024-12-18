#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int start = 0;
        int end  = row * col - 1;
        
        int mid = start + (end - start) / 2;
        
        while(start <= end) {
            int element = matrix[mid / col][mid % col];
            
            if(element == target) {
                return true;  // Return true if element is found
            }
            
            if(element < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            
            mid = start + (end - start) / 2;    
        }
        
        return false;  // Return false if element is not found
    }
};

int main() {
    Solution solution;
    
    // Example matrix and target
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    
    int target = 3;
    
    // Call the searchMatrix method and print the result
    bool found = solution.searchMatrix(matrix, target);
    if (found) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found!" << endl;
    }
    
    return 0;
}
