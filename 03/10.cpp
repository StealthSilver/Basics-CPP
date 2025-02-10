// sum of numebrs upto n using while loop

#include <iostream>
using namespace std;

int main()
{

    int sum = 0, n = 50, i = 0;

    while (i <= n)
    {
        sum = sum + i;

        i++;
    }

    cout << sum << endl;

    return 0;
}