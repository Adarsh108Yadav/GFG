#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            if (mid != n - 1 && arr[mid] == arr[mid + 1])
            {
                low = mid + 1;
            }
            else
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
    int arr[] = {1, 10, 10, 10, 10, 10, 10, 20, 20, 40};
    int low = 0;
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int high = n;
    int key;
    cin >> key;
    cout << lastOcc(arr, n, low, high, key);
    return 0;
}