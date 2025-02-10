// lower or uppercase char

#include <iostream>
using namespace std;

int main()
{

    char ch = 'O';

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lower case" << endl;
    }
    else
    {
        cout << "upper case" << endl;
    }

    return 0;
}