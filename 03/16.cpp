// sum of all numbers upto n which are div of 3

#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "enter n";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
    }

    cout << sum << endl;
    return 0;
}