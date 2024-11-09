#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        this->head = nullptr;
    }

    // Insert at the end
    void Push(int val)
    {
        Node *newNode = new Node(val);
        if (this->head == nullptr) // List is empty
        {
            this->head = newNode;
            return;
        }

        Node *temp = this->head;
        while (temp->next != nullptr) // Traverse to the last node
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at a given position

    // Delete from the end
    void Pop()
    {
        if (this->head == nullptr) // List is empty
        {
            return;
        }

        if (this->head->next == nullptr) // Only one element
        {
            delete this->head;
            this->head = nullptr;
            return;
        }

        Node *temp = this->head;
        while (temp->next->next != nullptr) // Traverse to the second last node
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    // Print the linked list
    void printList()
    {
        Node *temp = this->head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        // cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList list;

    list.Push(30); // 20 -> 10 -> 30 -> NULL

    list.Pop(); // 15 -> 10 -> NULL
    cout << "Linked List after deleting from the end: ";
    list.printList();

    return 0;
}