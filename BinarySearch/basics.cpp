#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        if(key <= arr[mid]){
            end = mid - 1;
        } else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){

    int even[6] = {2, 3, 6, 9, 12, 60};
    int odd[5] = {1, 2, 3, 6, 9,};
    int evenIndex = binarySearch(even, 6, 6);
    cout << "index of 6 is " << evenIndex << endl;
     int oddIndex = binarySearch(odd, 5, 3);

    cout << " Index of 3 is " << oddIndex << endl;


    return 0;
}