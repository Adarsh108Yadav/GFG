#include <iostream>
using namespace std;

int count_1S(int arr[], int size)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1)
            if (mid > 0 && arr[mid - 1] == 1)
                high = mid - 1;
            else
                return size - mid;
        else if (arr[mid] < 1)
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << count_1S(arr, size);
    return 0;
}