// sum of the digits of a number

#include <iostream>
using namespace std;

int sumDigit(int a)
{

    int sum = 0;

    while (a > 0)
    {
        int lastDigit = a % 10;
        a /= 10;

        sum += lastDigit;
    }

    return sum;
}

int main()
{

    int a = 1456;
    cout << sumDigit(a) << endl;

    return 0;
}
