// printing all the unique elements

#include <iostream>
using namespace std;

void findUniqueElements(int arr[], int size)
{
    cout << "Unique elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUniqueElements(arr, size);

    return 0;
}
