// Pointer Initialization and Null Check
// Declare a pointer
// Initialize it to nullptr
// safely check before using it
#include <iostream>

int main()
{
    // Declare and initialize a pointer
    int* ptr = nullptr;

    // Check if the pointer is null
    if (ptr == nullptr)
    {
        std::cout << "Pointer is null; no value to dereference.\n";

        // Initialize pointer to a valid memory address
        int value = 42;
        ptr = &value;
        std::cout << "Pointer initialized to address of value: " << *ptr << std::endl;
    }
    else
    {
        std::cout << *ptr << std::endl;
    }

    // Pause for input before exiting
    std::cin.get();
    return 0;
}
