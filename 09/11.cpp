// linear search in a vector

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    vector<int> nums = {10, 20, 30, 40, 50};
    int target = 30;

    int index = linearSearch(nums, target);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}
