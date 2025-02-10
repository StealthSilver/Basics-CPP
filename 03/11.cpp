// break statement

#include <iostream>
using namespace std;

int main()
{

    int sum = 0;
    int n = 100;

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;

        if (i == 5)
        {
            break;
        }
    }

    cout << sum << endl;

    return 0;
}