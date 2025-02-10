// can or cannot vote

#include <iostream>
using namespace std;

int main()
{

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "eligible for voting" << endl;
    }
    else
    {
        cout << "not eligible for voting" << endl;
    }

    return 0;
}