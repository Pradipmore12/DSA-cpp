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
    //add your node before head Node
    temp->next = head;
    //change prev pointer of head to temp
    head->prev = temp;
    //update head by temp/newly created Node
    head = temp;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    // head->prev=NULL;
    print(head);
    insertAtHead(head, 20);
    print(head);

    return 0;
}