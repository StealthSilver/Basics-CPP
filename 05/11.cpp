// function to check if a numebr is prime or not

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // Handle numbers <= 1
    if (n <= 1)
        return false;

    // Only check up to sqrt(n) to improve efficiency
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // If divisible, not prime
        }
    }

    return true; // No divisors found, it's prime
}

int main()
{
    int n = 8;

    if (isPrime(n))
    {
        cout << "It is prime" << endl;
    }
    else
    {
        cout << "It is not a prime" << endl;
    }

    return 0;
}
