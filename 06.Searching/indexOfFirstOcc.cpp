#include <iostream>
using namespace std;

int firstOcc(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key && (mid == 0 || arr[mid] != arr[mid - 1] ))
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 10, 10, 10, 20, 20, 40};
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int key;
    cin >> key;
    cout << firstOcc(arr, low, high, key);
    return 0;
}