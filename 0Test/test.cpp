#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool checkIfExist(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int low = i + 1;
        int high = arr.size() - 1;
        int key = 2 * arr[i];
        if ((arr[i] < 0) && (arr[i] & 1) == 0)
            key = arr[i] / 2;
        cout << arr[i] << " " << key << endl;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key)
                return true;
            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {102, -592, 457, 802, 98, -132, 883, 356, -857, 461, -453, 522, 250, 476, 991, 540, -852, -485, -637, 999, -803, -691, -880, 881, -584, 750, -124, 745, -909, -892, 304, -814, 868, 665, 50, -40, 26, -242, -797, -360, -918, -741, 88, -933, -93, 360, -738, 833, -191, 563, 449, 840, 806, -87, -950, 508, 74, -448, -815, -488, 639, -334};

    bool k = checkIfExist(nums);
    cout << k << endl;
    return 0;
}
