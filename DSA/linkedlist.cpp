#include <iostream>
using namespace std;

struct Node {
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize a new node
    Node(int x) : data(x), next(nullptr) {}
};

// Function to insert a new node into the linked list
void insert(Node** head, int x) {
    cout << "\nInserting " << x << " into the linked list." << endl;

    // Create a new node
    Node* temp = new Node(x);

    // If the list is empty, make the new node the head
    if (*head == nullptr) {
        *head = temp;
        cout << "The list was empty. " << x << " is now the head of the list." << endl;
        return;
    }

    // Traverse to the end of the list to append the new node
    Node* current = *head;
    cout << "Traversing the list to find the end: ";
    while (current->next != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << current->data << endl;

    // Append the new node at the end
    current->next = temp;
    cout << x << " has been added to the end of the list." << endl;
}

// Function to print the current state of the linked list
void printList(Node* head) {
    cout << "\nCurrent Linked List: ";
    Node* current = head;

    // Traverse and print each node
    while (current != nullptr) {
        cout << current->data;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

// Function to clean up and delete the linked list
void deleteList(Node* head) {
    cout << "\nDeleting the linked list:" << endl;
    Node* current = head;

    // Delete each node one by one
    while (current != nullptr) {
        Node* next = current->next;
        cout << "Deleting: " << current->data << endl;
        delete current;
        current = next;
    }
    cout << "All nodes deleted. The list is now empty." << endl;
}

int main() {
    Node* head = nullptr;
    int n;

    // Ask the user how many numbers they want to enter
    cout << "How many numbers do you want to add to the linked list? ";
    cin >> n;

    // Let the user enter the numbers
    for (int i = 0; i < n; i++) {
        int number;
        cout << "Enter number " << (i + 1) << ": ";
        cin >> number;
        insert(&head, number);
        printList(head);  // Print the list after each insertion
    }

    // Delete the entire list to free memory
    deleteList(head);
    head = nullptr;  // Set head to nullptr after deletion

    return 0;
}
