// Reverse Array Using Pointers
// Reverse an array in-place using pointers
#include <iostream>
using namespace std;

int main()
{
    int numbers [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // reverse the array using pointers
    int *start = &numbers[0];
    int *end = &numbers[size - 1];

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        // move pointers
        *start++;
        *end--;
    }



    // Print the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    cin.get();
    return 0;
}