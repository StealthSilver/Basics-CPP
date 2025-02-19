#include <iostream>
using namespace std;

int main()
{

    int marks[5];
    int size = 5;

    // loops on array for input

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    // loops on array for output

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}