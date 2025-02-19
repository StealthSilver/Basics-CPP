// single number (leetcode 136)
// XOR method

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;

    for (int num : nums)
    {
        result ^= num; // XOR each number
    }

    return result; // The single number remains
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums) << endl;
    return 0;
}
