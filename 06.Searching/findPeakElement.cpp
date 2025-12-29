#include <iostream>
using namespace std;

int peakElement(int arr[], int low, int high)
{
    if (high == 0 || arr[0] >= arr[1])
        return 0;
    if (arr[high] >= arr[high - 1])
        return high;
    int n = high;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1])
            return mid;
        else if (arr[mid - 1] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << peakElement(arr, 0, size - 1);
    return 0;
}