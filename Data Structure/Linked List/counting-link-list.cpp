#include <iostream>

// Struktur Node
struct Node {
    int data;
    Node* next;
};

void addNode(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*head);
    (*head) = newNode;
}

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    return count;
}

int main() {
    Node* head = NULL;

    addNode(&head, 4);
    addNode(&head, 8);
    addNode(&head, 2);
    addNode(&head, 5);

    int nodeCount = countNodes(head);

    std::cout << "Jumlah elemen dalam linked list: " << nodeCount << std::endl;

    return 0;
}
