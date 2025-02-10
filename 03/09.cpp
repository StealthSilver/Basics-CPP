// sum of numebrs from 1 to n

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n = 8;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << sum << endl;

    return 0;
}