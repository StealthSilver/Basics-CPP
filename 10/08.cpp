// best approach Moore's voting algorithm  O(n)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15, 15, 15, 15, 15};

    int freq = 0;
    int candidate = 0;

    // First pass: find a candidate
    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            candidate = nums[i];
        }
        if (candidate == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    // Optional second pass: verify the candidate is actually the majority element
    int count = 0;
    for (int num : nums)
    {
        if (num == candidate)
            count++;
    }

    if (count > nums.size() / 2)
        cout << "Majority Element: " << candidate << endl;
    else
        cout << "No Majority Element Found" << endl;

    return 0;
}
