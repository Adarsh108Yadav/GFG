#include <iostream>
#include <array>
using namespace std;

void twoPoiSearchForTwoSum(int arr[], int sumToFind, int size)
{
    int low = 0;
    int high = size - 1;
    while (low < high)
    {
        int sum = arr[low] + arr[high];
        if (sum == sumToFind)
        {
            cout << arr[low] << " " << arr[high] << endl;
            low++;
        }
        else if (sumToFind < sum)
            high--;
        else
            low++;
    }
}

void twoPoiSearchForThreeSum(int arr[], int sumToFind, int size)
{
    for (int i = 0; i < size - 3; i++)
    {
        int remSum = sumToFind - arr[i];
        int left = i + 1;
        int right = size - 1;
        while (left < right)
        {
            if (arr[left] + arr[right] == remSum)
            {
                cout << arr[i] << " " << arr[left] << " " << arr[right] << endl;
                break;
            }
            else if (arr[left] + arr[right] < remSum)
                left++;
            else
                right--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 12, 14, 16, 18, 19, 20, 25, 26, 28, 46};
    int sumToFind;
    int size = sizeof(arr) / sizeof(arr[0]);
    cin >> sumToFind;
    twoPoiSearchForTwoSum(arr, sumToFind, size);
    cout << endl;
    twoPoiSearchForThreeSum(arr, sumToFind, size);
    return 0;
}