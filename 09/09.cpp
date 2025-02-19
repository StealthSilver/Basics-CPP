// single number (leetcode 136)
// nested loop method

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        // Count occurrences of nums[i]
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }

        // If count is 1, return the number
        if (count == 1)
        {
            return nums[i];
        }
    }

    return -1; // Should never reach here if input is valid
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2, 3, 7, 7, 8, 9};
    cout << "Single Number: " << singleNumber(nums) << endl;
    return 0;
}
