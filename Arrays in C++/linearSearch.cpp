#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++) // Fixed semicolon and loop condition
    {
        if (arr[i] == key)
        {
            return true; // Use `true` instead of `1` for readability
        }
    }
    return false;
}

int main()
{
    int arr[10] = {10, 2, 32, 56, 45, -20, 13, 1, 4, 6}; // Removed trailing comma

    int key;
    cout << "Enter the value which you want to find: " << endl;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "The value " << key << " is found in the array." << endl; // Improved message
    }
    else
    {
        cout << "The value " << key << " is not found in the array." << endl; // Improved message
    }

    return 0;
}
