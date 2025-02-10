// function to find sum of two nums and min

#include <iostream>

using namespace std;

double sum(double a, double b) // parameters
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
    cout << sum(3.456, 7.84734) << endl; // arguments

    cout << min(4, 8) << endl;

    return 0;
}
