// reversing an array -> duplicate array approch

#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size], reversed[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        reversed[i] = arr[size - 1 - i];
    }

    // printing the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << reversed[i] << " ";
    }
    cout << endl;

    return 0;
}