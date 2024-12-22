#include <iostream>
using namespace std;
void print(int arr[], int n){
     cout << "Size of array is " << n << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } cout << endl;
}


bool linearSearch(int arr[], int n, int k){
    print(arr, n);
    if(n == 0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    int remainingPart = linearSearch(arr+1, n-1, k);
    return remainingPart;
}






int main() {
    int arr[6] = {10,50,46,25,74,33};
    int n = 6;
    int k = 74;
    int ans = linearSearch(arr, n, k);
    if(ans){
        cout << "present" << endl;

    } else {
        cout << "Not present" << endl;
    }
    return 0;
}