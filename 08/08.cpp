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

    int arr[] = {4, 2, 7, 8, 9};
    int size = 2;
    int target = 8;

    linearSearch(arr, size, target);

    return 0;
}