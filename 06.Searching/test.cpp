#include <iostream>
using namespace std;

int bSearch(int arr[], int toSearch)
{
    int low = 0;
    int high = 9;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == toSearch)
        {
            return mid;
        }
        else if (arr[mid] < toSearch)

            low = mid + 1;
        else if (arr[mid] > toSearch)

            high = mid - 1;
    }
    return -1;
}

int recBinarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return recBinarySearch(arr, mid + 1, high, key);
    else
        return recBinarySearch(arr, low, mid - 1, key);
}
int lastOcc(int arr[], int n, int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key)
    {
        if (mid != n && arr[mid] == arr[mid + 1])
            return lastOcc(arr, n, mid + 1, high, key);
        else
            return mid;
    }
    else if (arr[mid] < key)
        return lastOcc(arr, n, mid + 1, high, key);
    else
        return lastOcc(arr, n, low, mid - 1, key);
}
int main()
{
    int arr[] = {1, 10, 10, 10, 10, 10, 10, 20, 20, 40};
    int low = 0;
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int high = n;
    int key;
    cin >> key;
    cout << lastOcc(arr, n, low, high, key) << endl;

    cout << bSearch(arr, key) << endl;

    cout << recBinarySearch(arr, low, high, key);
    return 0;
}
