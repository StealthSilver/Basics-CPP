// calculate the bionomial coefficient of n and r

#include <iostream>
using namespace std;

int factorial(int a)
{

    int fact = 1;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int coeff(int n, int r)
{

    int coefficient = factorial(n) / (factorial(r) * factorial(n - r));
    return coefficient;
}

int main()
{

    int n = 6, r = 3;
    cout << coeff(n, r) << endl;

    return 0;
}
