#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int k = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[k] != nums[i])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    vector<int> nums = {0, 0, 1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 4, 4};
    int k = removeDuplicates(nums);
    cout << endl
         << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i];
    }
    return 0;
}
