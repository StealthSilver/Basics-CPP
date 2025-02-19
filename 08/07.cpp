// pass by value for arrays
#include <iostream>
#include <array>

// Function that takes std::array by value (explicit pass-by-value)
void modifyArray(std::array<int, 5> arr)
{
    arr[0] = 100; // Modify the first element
    std::cout << "Inside function: " << arr[0] << std::endl;
}

int main()
{
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    modifyArray(myArray); // Pass by value (copy is created)

    std::cout << "Outside function: " << myArray[0] << std::endl; // Original array remains unchanged
    return 0;
}
