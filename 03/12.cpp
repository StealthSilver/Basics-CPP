// sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{

    int n = 100, sum = 0;

    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}