#include <bits/stdc++.h>
using namespace std;

// initiate a Node class

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // create a new node
    Node *node1 = new Node(20);
    // cout << node1->data << " " << node1->next << endl;

    // head pointed to node1

    Node *head = node1;

    // print elements
    print(head);

    // insert at head

    insertAtHead(head, 10);

    // print after insertion

    print(head);

    return 0;
}