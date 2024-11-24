#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int x) : data(x), next(nullptr) {}
};

void insert(Node** head, int x) {
    Node* temp = new Node(x);

    std::cout << "Inserting: " << x << std::endl;  // Debug output

    if (*head == nullptr) {
        *head = temp;
        std::cout << "Head is now: " << (*head)->data << std::endl; // Debug output
        return;
    }

    Node* current = *head;
    std::cout << "Traversing list: "; // Debug output
    while (current->next != nullptr) {
        std::cout << current->data << "->";          // Debug output
        current = current->next;
    }
    std::cout << current->data << std::endl;        // Debug output
    current->next = temp;
    std::cout << "Appended " << x << " to the end." << std::endl; // Debug output
}


void printList(Node* head) {
    std::cout << "Current List: ";
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << "->";
        }
        current = current->next;
    }
    std::cout << std::endl;
}


int main() {
    Node* head = nullptr;


    insert(&head, 10);
    printList(head); // Print after each insertion
    insert(&head, 20);
    printList(head);
    insert(&head, 30);
    printList(head);


    std::cout << "Deleting List:" << std::endl; // Debug output for deletion
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        std::cout << "Deleting: " << current->data << std::endl; // Debug output
        delete current;
        current = next;
    }
    head = nullptr;


    return 0;
}
