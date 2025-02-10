// marks

#include <iostream>

using namespace std;

int main()
{

    int marks;

    cin >> marks;

    if (marks >= 90)
    {
        cout << "GRADE A" << endl;
    }
    else if (marks >= 70 && marks < 90)
    {
        cout << "GRADE B" << endl;
    }
    else
    {
        cout << "GRADE C" << endl;
    }

    return 0;
}