// brute force approch for max sum (leetcode 56) -> 0(n^2) time complexity

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;

        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
        cout << endl;
    }

    cout << "max subarray sum = " << maxSum << endl;

    return 0;
}
