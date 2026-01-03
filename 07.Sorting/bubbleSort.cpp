#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{

    int cSize = size - 1;
    while (cSize > 0)
    {
        bool swapped = false;
        int i = 0;
        while (i < cSize)
        {
            if (arr[i] > arr[i + 1])
            {
                swapped = true;
                swap(arr[i], arr[i + 1]);
            }
            i++;
        }
        if (!swapped)
            break;
        cSize--;
    }
}

int main()
{
    int arr[] = {0, 8, 0, 7, 0, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}