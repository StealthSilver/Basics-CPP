#include <iostream>
using namespace std;

int main()
{

    int n = 8;

    for (int i = 1; i <= n; i++) // outer loop -> no of lines
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++) // inner loop starts -> line starts
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}