// kadane's approch for max sum (leetcode 56) -> linear time complexity
#include <iostream>
#include <vector>
#include <climits> // For INT_MIN

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN; // Stores the maximum subarray sum
    int currentSum = 0;   // Stores sum of current subarray

    for (int num : nums)
    {
        currentSum = max(num, currentSum + num); // Extend or restart subarray
        maxSum = max(maxSum, currentSum);        // Update global maximum sum
    }

    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
