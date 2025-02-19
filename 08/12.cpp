// function to swap min and max of an array

#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 65, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smidx = -1;
    int lgidx = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smidx = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            lgidx = i;
        }
    }

    swap(arr[smidx], arr[lgidx]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}