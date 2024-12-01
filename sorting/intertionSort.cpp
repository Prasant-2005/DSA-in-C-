#include <iostream>
#include <algorithm> // For swap
using namespace std;

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int arr[6] = {7, 4, 6, 9, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    { // Print sorted array
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}