#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0, base = 1, last_digit;

    // Convert binary to decimal
    while (binary > 0)
    {
        last_digit = binary % 10;
        decimal += last_digit * base;
        binary /= 10;
        base *= 2;
    }

    cout << "Decimal: " << decimal << endl;

    return 0;
}
