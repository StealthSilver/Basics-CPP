// linear search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "FOUND" << endl;
            return i;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {4, 2, 7, 8, 9, 3, 2, 1};
    int size = 7;
    int target = 8;

    int result = linearSearch(arr, size, target);
    cout << result << endl;

    return 0;
}