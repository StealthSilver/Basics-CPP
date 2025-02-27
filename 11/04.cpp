// Function to calculate Fibonacci using recursion -> O(2^n)

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    cout << "Enter the position: ";
    cin >> num;

    cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;

    return 0;
}