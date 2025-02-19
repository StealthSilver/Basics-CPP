#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int marks[5];
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    int largest = INT_MIN;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
            index = i;
        }
    }

    cout << "Largest element: " << largest << " at index " << index << endl;

    return 0;
}
