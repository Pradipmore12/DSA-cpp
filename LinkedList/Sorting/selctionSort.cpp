// sort Linked List using slection Sort
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
void selectionSort(Node *&head)
{
    Node *prev = head;
    while (prev->next != NULL)
    {
        Node *next = prev->next;
        while (next != NULL)
        {
            if (prev->data > next->data)
            {
                int temp = prev->data;
                prev->data = next->data;
                next->data = temp;
            }
            next = next->next;
        }
        prev = prev->next;
    }
    return;
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
    print(head);
    selectionSort(head);
    print(head);

    return 0;
}