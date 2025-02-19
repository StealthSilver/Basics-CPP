// smallest element in an array

#include <iostream>

using namespace std;

int main()
{

    int marks[5];
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    int smallest = INT_MAX;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        // max(marks[i], largest)
        {
            smallest = marks[i];
            index = i;
        }
    }

    cout << "Smallest element: " << smallest << " at index " << index << endl;

    return 0;
}