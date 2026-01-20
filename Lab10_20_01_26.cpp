#include <iostream>
#include <stdio.h>
using namespace std;

void deleteNode(int key);
void insertNode(int key, string data);
void displayList();

struct Node {
    int key = -1;
    string data = "";
    Node* next = nullptr;
};

Node* lastAdded = nullptr;
Node* head = nullptr; 

void deleteNode(int key) {
    
}

void insertNode(int key, string data) {
    Node* newNode = new Node();
    newNode->key = key;
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        lastAdded = head;
    }
    else {
        lastAdded->next = newNode;
        lastAdded = newNode;
    }
}

void displayList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << "Key: " << temp->key << ", Data: " << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    int choice, key;
    string data;
    while (true) {
        system("cls");
        cout << "1. Add new element" << endl;
        cout << "2. Delete an element" << endl;
        cout << "3. Show whole list" << endl;
        cout << "9. Exit" << endl;
        cout << endl;
        cout << "Enter an option: ";
        cin >> choice;
        if (choice == 9) { return 0; }

        switch (choice) {
            case 1: {
                cout << "Please write integer number: ";
                cin >> key;
                cout << "Please write any string: ";
                cin >> data;
                cout << "\n" << key << " -> " << data << endl;
                insertNode(key, data);
                break;
            }
            case 2: {
                displayList();
                cout << "\nWhich element do you want to delete?" << endl;
                cin >> key;
                deleteNode(key);
                break;
            }
            case 3: {
                cout << endl;
                displayList();
                break;
            }

            default: {
                cout << "Invalid choise" << endl;
                break;
            }
        }
        cout << endl;
        cin.ignore();
        cin.get();
    }
}
