#include <iostream>
using namespace std;

int main()
{

    int a = 9;

    int b = --a;

    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    int c = 8;
    int d = c++;

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}