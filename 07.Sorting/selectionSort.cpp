#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int poi = 1;
    while (poi < size)
    {
        int min = poi - 1;
        int i = poi;
        while (i < size)
        {
            if (arr[min] > arr[i])
                min = i;
            i++;
        }
        swap(arr[min], arr[poi - 1]);
        poi++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
}

int main()
{
    int arr[] = {2, 67, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    return 0;
}