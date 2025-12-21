#include <iostream>
using namespace std;

void firstOcc(int arr[], int low, int high, int key, int &cnt)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key && (mid == 0 || arr[mid] != arr[mid - 1]))
        {
            firstOcc(arr, 0, mid - 1, arr[mid - 1], cnt);
            if (mid - cnt)
                cout  <<  mid - cnt << endl;
            cnt = mid;
            cout <<"Occurence of " << arr[mid] << " in array is : ";
        }
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    // cout << -1;)
}
int main()
{
    int arr[] = {1,1,1,1,2,2,2,2,5,5,5,7,9,9,10};
    int low = 0;
    int n = sizeof(arr) / sizeof(arr[0]) - 1;
    int high = n;
    int key = arr[n];
    int cnt = 0;

    firstOcc(arr, low, high, key, cnt);
    cout << n - cnt + 1;

    return 0;
}