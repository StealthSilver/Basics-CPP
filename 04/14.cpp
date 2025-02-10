// non inverted pascals triangle

#include <iostream>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        { // loop for printing spaces
            cout << " ";
        }
        int num = 1;
        for (int j = 0; j <= i; j++) // loop for printing Pascal's triangle values
        {
            cout << num << " ";
            num = num * (i - j) / (j + 1); // Formula for Pascal's triangle
        }

        cout << endl;
    }

    return 0;
}
