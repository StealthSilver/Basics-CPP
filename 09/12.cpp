// reversing a vector

#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    // reverse(nums.begin(), nums.end()); // STL function
    while (left < right)
    {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    reverseVector(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
