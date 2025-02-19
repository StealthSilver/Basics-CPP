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

    for (int i = 0; i < size; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
    }

    cout << smallest << endl;

    return 0;
}