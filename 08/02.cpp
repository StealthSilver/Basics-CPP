#include <iostream>
using namespace std;

int main()
{

    int marks[5];
    int size = 5;

    // size of the memory occupied by an array
    cout << sizeof(marks) << endl;

    // size of the variables in an array
    cout << sizeof(marks) / sizeof(int) << endl;

    // loops on array

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}