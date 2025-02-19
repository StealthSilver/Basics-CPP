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

    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        largest = max(marks[i], largest);
    }

    cout << largest << endl;

    return 0;
}