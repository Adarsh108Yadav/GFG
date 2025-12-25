#include <iostream>
using namespace std;

int search(int arr[], int key)
{
    int low, high;
    if(arr[0] == key)
        return 0;
    int i = 1;
    while (arr[i] < key)
    {
        if (arr[i] == key)
            return i;
        low = i + 1;
        i *= 2;
        high = i;
    }
    while ( low <= high )
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
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
    int key;
    cin >> key;
    int arr[] = {1, 4, 6, 8, 9, 23, 25, 38, 49, 59, 72, 76, 89, 90, 92, 100, 127, 130, 146, 169, 199, 483};
    cout << search(arr, key);
    return 0;
}