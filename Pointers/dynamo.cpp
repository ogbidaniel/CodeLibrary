#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Check if memory allocation was successful
    if (arr == nullptr) {
        cerr << "Memory allocation failed!" << endl;
        return 1; // Indicate an error
    }

    // Populate the array with user input
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Print the sum
    cout << "Sum of the elements: " << sum << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    cin.get();
    return 0;
}