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
    ~Node()
    {
        cout << "data deleted" << endl;
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
Node *removeDuplicate(Node *&head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        Node *iterator = temp->next;
        while (iterator->next != NULL)
        {
            if (iterator->next->data == temp->data)
            {
                Node *store = iterator->next;
                iterator->next = iterator->next->next;
                delete store;
            }
            else
            {
                iterator = iterator->next;
            }
        }

        temp = temp->next;
    }
    return head;
}
int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    /*Node *node2 = new Node(20);
    Node *node3 = new Node(10);
    Node *node4 = new Node(10);
    Node *node5 = new Node(15);
    Node *node6 = new Node(10);
    Node *node7 = new Node(25);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;*/

    insertAtHead(head, 15);
    // print(head);
    insertAtTail(tail, 15);
    //(head);
    insertAtTail(tail, 25);
    insertAtTail(tail, 10);
    insertAtTail(tail, 30);
    insertAtTail(tail, 10);
    print(head);
    Node *head2 = removeDuplicate(head);
    print(head);

    return 0;
}