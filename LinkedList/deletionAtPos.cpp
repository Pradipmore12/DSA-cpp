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
void deleteAtPos(Node *&head, int pos)
{
    Node *prevTemp = head;
    Node *nextTemp = head;
    int prevCount = 1;
    int nextCount = 1;

    // getting prev Node
    while (prevCount < pos - 1)
    {
        prevTemp = prevTemp->next;
        prevCount++;
    }

    // getting next or given position Node

    while (nextCount < pos)
    {
        nextTemp = nextTemp->next;
        nextCount++;
    }

    // deletion starts

    prevTemp->next = nextTemp->next;
}
int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    node1->next = node2;
    node2->next = node3;
    Node *head = node1;
    int pos;
    print(head);
    cout << "enter the pos to delete" << endl;
    cin >> pos;

    deleteAtPos(head, pos);
    print(head);

    return 0;
}