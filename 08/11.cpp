// finding the sum and product of all numbers in array

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int size = 7;

    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout << "sum is : " << sum << " product is :" << product << endl;

    return 0;
}