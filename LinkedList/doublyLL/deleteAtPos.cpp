#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteAtPos(Node *&head, int pos)
{
    Node *temp1 = head;
    Node *temp2 = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp1 = temp1->next;
        count++;
    }

    while (count < pos)
    {
        temp2 = temp2->next;
        count++;
    }

    temp1->next = temp2->next;
    temp2->next->prev = temp1;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *tail = node3;

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;

    print(head);
    deleteAtPos(head, 2);
    print(head);

    return 0;
}