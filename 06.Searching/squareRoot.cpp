#include <iostream>
using namespace std;

int isqrt(int x)
{
    int i = 1;
    for (i = 1; i <= x / 2; i++)
    {
        if (i * i > x)
            break;
    }
    return (i - 1);
}

int nsqrt(int x)
{
    if (x == 1)
        return 1;
    int low = 1;
    int high = x / 2;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        // int chk = mid * mid;
        if (mid == x / mid)
            return mid;
        else if (mid < x / mid)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}

int main()
{
    int x;
    cin >> x;
    // cout <<  isqrt(x);
    cout << nsqrt(x);
    return 0;
}