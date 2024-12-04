// Pointer Initialization and Null Check
// Declare a pointer
// Initialize it to nullptr
// safely check before using it
#include <iostream>

int main()
{
    int* ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "Null Pointer. Undefined behaviour\n";
    }
    else 
    {
        std::cout << *ptr << std::endl;
    }

    system("Pause");
    return 0;
}
