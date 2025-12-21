#include <iostream>
using namespace std;

int bSearch(int arr[], int toSearch)
{
    int low = 0;
    int high = 4;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == toSearch)
            return mid;
        else if (arr[mid] < toSearch)
            low = mid + 1;
        else if (arr[mid] > toSearch)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 5, 7, 9};
    int toSearch;
    cin >> toSearch;
    cout << bSearch(arr, toSearch);
    return 0;
}