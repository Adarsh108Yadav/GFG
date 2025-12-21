#include <iostream>
using namespace std;

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
int main()
{
    int arr[7] = {1, 10, 10, 10, 20, 20, 40};
    int key;
    cout << "Enter number to be searched : ";
    cin >> key;
    int low = 0;
    int high = (sizeof(arr) / sizeof(arr[0]) - 1);
    cout << recBinarySearch(arr, low, high, key);
    return 0;
}