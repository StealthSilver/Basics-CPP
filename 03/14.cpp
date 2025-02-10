// checking if a numebr is prime

#include <iostream>

using namespace std;

int main()
{

    int n;
    bool isPrime = true;

    cout << "enter the number" << endl;
    cin >> n;

    if (n < 2)
    {
        cout << "Not prime" << endl;
    }

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {

            isPrime = false;
            break;
        }
    }

    if (isPrime == false)
    {
        cout << "not prime" << endl;
    }
    else
    {
        cout << "prime" << endl;
    }

    return 0;
}