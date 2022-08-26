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
void Sort(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data > temp->next->data && temp->next !=NULL)
        {
            int sample = temp->data;
            temp->data = temp->next->data;
            temp->next->data = sample;
        }
        temp = temp->next;
    }
}
int main()
{

    Node *node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 15);
    print(head);
    insertAtTail(tail, 30);
    print(head);
    insertAtTail(tail, 90);
    insertAtTail(tail, 20);
    insertAtTail(tail, 50);
    insertAtTail(tail, 10);
    Sort(head);
    print(head);

    return 0;
}