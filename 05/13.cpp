// finding the nth fibonnachi number

#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number using iteration (efficient)
int fibonacci(int n)
{
    // The first two Fibonacci numbers
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1, c;

    // Loop to calculate Fibonacci numbers iteratively
    for (int i = 2; i <= n; i++)
    {
        c = a + b; // Next Fibonacci number
        a = b;     // Move to the next two numbers
        b = c;
    }

    return c; // Return the nth Fibonacci number
}

int main()
{
    int n = 10;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
