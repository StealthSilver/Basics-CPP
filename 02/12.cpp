#include <iostream>
using namespace std;

int main()
{

    cout << !(3 < 1) << endl;
    cout << (true || false) << endl;
    cout << (true || true) << endl;
    cout << (false || false) << endl;
    cout << (false || true) << endl;
    cout << (true && true) << endl;
    cout << (false && true) << endl;
    cout << (true && false) << endl;
    cout << (false && false) << endl;
    return 0;
}