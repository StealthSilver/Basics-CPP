// pass by value

#include <iostream>
using namespace std;

int fun(int x)
{

    x = x * 10;

    return x;
}

int main()
{

    int x = 3;
    cout << fun(x) << endl;

    cout << x << endl;

    return 0;
}
