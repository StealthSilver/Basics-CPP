// pass by value

#include <iostream>
using namespace std;

int sum(int a, int b)
{

    a = a + 10;
    b = b + 2;

    return a + b;
}

int main()
{

    int a = 5, b = 7;
    cout << sum(a, b) << endl;

    cout << a << endl;
    cout << b << endl;

    return 0;
}
