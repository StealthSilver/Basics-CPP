#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0)
    {
        cout << "Binary: 0" << endl;
        return 0;
    }

    int binary[32]; // Array to store binary digits
    int index = 0;

    while (decimal > 0)
    {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    // Print binary in reverse order
    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
