// function to find sum of two nums

#include <iostream>

using namespace std;

double sum(double a, double b)
{
    double ans = a + b;

    return ans;
}

double min(double c, double d)
{
    if (c < d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

int main()
{
    cout << sum(3.456, 7.84734) << endl;

    cout << min(4, 8) << endl;

    return 0;
}
