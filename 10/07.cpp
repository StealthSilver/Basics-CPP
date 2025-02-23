// better approach for majority element -> sorting O(nlogn))
#include <iostream>
#include <vector>
#include <algorithm> // Required for sort()
using namespace std;

int main()
{
    vector<int> nums = {2, 7, 11, 15, 15, 15, 15, 15};

    int n = nums.size();

    // Sort the vector
    sort(nums.begin(), nums.end());

    int freq = 1;
    int majority = nums[0];
    bool foundMajority = false;

    // Traverse the sorted array counting frequency
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1; // Reset frequency for new element
        }

        if (freq > n / 2)
        {
            majority = nums[i];
            foundMajority = true;
            break; // Majority element found
        }
    }

    if (foundMajority)
        cout << "Majority Element: " << majority << endl;
    else
        cout << "No Majority Element Found" << endl;

    return 0;
}
