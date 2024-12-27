#include <iostream>
#include <string>

int main()
{
    // Example 1: Iterating through a string array and printing elements using pointers
    std::string heralds[10] = {"Jezrien", "Shalash", "Vedeledev", 
                               "Ishar", "Talenelat", "Nale", 
                               "Chanarach", "Betab", "Kelek", "Pailiah"};
    std::string* strPtr = heralds; // Pointer to the first element of the array

    std::cout << "Heralds:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << *(strPtr + i) << std::endl; // Print each element
    }

    // Example 2: Modifying an integer array using pointers
    int numbers[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int* intPtr = numbers; // Pointer to the first element of the array

    std::cout << "\nModified Numbers:" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        *(intPtr + i) *= 2;  // Modify the element
        std::cout << *(intPtr + i) << " "; // Print modified element
    }

    std::cout << std::endl;

    // Wait for user input before exiting
    std::cin.get();
    return 0;
}