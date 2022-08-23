#include <bits/stdc++.h>
using namespace std;
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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void removeDuplicate(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL && temp->data == temp->next->data)
        {
            Node *next_next = temp->next->next;
            delete temp->next;
            temp->next = next_next;
        }
        else
            temp = temp->next;
    }
    return;
}
int main()
{

    Node *node1 = new Node(15);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 10);
    // print(head);
    insertAtTail(tail, 15);
    // print(head);
    insertAtTail(tail, 25);
    insertAtTail(tail, 20);
    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    print(head);
    removeDuplicate(head);
    print(head);

    return 0;
}