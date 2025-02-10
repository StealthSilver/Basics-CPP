

#include <iostream>

using namespace std;

int sum(int n)

{

    int sum = n * (n + 1) / 2;

    return sum;
}

int main()
{
    cout << sum(3) << endl;

    return 0;
}
