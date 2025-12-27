#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int bSearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] > key)
            high = mid - 1;
    }
    return -1;
}

int checkInRotatedArray(int arr[], int low, int high, int key)
{
    int mid = low + (high - low) / 2;
    if (arr[mid] >= arr[low] && arr[low] <= key && key <= arr[mid])
    {
        cout << " y \n";
        return bSearch(arr, low, mid, key);
    }
    else if (arr[mid] <= arr[high] && arr[mid] <= key && key <= arr[high])
    {
        cout << " n \n";
        return bSearch(arr, mid, high, key);
    }
    return -2;
}

int main()
{
    int nums[] = {10, 20, 40, 60, 5, 8};
    int key;
    int low = 0;
    int high = sizeof(nums) - 1;
    cin >> key;
    int k = checkInRotatedArray(nums, low, high, key);
    cout << k << endl;
    return 0;
}
