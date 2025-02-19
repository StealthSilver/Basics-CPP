// reversing an array -> 2 pointer approach

#include <iostream>

using namespace std;

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int left = 0, right = size - 1;
    while (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    // printing the reverse array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
