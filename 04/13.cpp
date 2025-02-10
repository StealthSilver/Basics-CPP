// inverted pascals triangle

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        { // loop for printing spaces
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) // loop for printing Pascal's triangle values
        {
            cout << i + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}
