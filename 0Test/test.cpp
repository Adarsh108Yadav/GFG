#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkInRotatedArray(int arr[], int low, int high, int key)
{
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= key && key < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] < key && key <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {10, 20, 40, 60, 5, 8};
    int key;
    int low = 0;
    int high = sizeof(nums) / sizeof(nums[0]) - 1;
    cin >> key;
    int k = checkInRotatedArray(nums, low, high, key);
    cout << k << endl;
    return 0;
}
