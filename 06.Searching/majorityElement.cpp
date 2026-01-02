#include <iostream>
using namespace std;

int majorityElement(int arr[], int size)
{
    int cnt = 1;
    int st = 0;
    int i = 1;
    while (i < size)
    {
        (arr[st] == arr[i]) ? cnt++ : cnt--;
        if (cnt == 0)
        {
            st = i;
            cnt = 1;
        }
        i++;
    }
    i = 0;
    cnt = 0;
    while (i < size)
    {
        if (arr[st] == arr[i])
            cnt++;
        i++;
    }
    if (cnt > size / 2)
        return arr[st];
    return -1;
}

int main()
{
    int arr[] = {4,4,4,4,4,1,2,2,2,2,2,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << majorityElement(arr, size);
    return 0;
}