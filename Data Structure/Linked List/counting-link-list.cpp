#include <iostream>

// Node class untuk merepresentasikan setiap elemen dalam linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Class LinkedList untuk menyimpan linked list dan operasinya
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    // Menambahkan elemen baru ke linked list
    void addElement(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Menghitung jumlah elemen dalam linked list
    int countElements() {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    LinkedList list;

    // Menambahkan elemen ke linked list
    list.addElement(10);
    list.addElement(20);
    list.addElement(30);
    list.addElement(40);
    list.addElement(50);

    // Menghitung jumlah elemen dalam linked list
    int count = list.countElements();

    std::cout << "Jumlah elemen dalam linked list: " << count << std::endl;

    return 0;
}
