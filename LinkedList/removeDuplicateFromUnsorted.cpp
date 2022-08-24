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
    ~ Node(){
        delete this;

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
        Node *next=temp->next;
        Node *prev=temp;
        while(next!=NULL){
            if(next->data==temp->data){
                Node *next_next=next->next;
                prev->next=next_next;
            }

                next=next->next;
                prev=prev->next;

        }


        temp=temp->next;
    }
    return;
}
int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 15);
    // print(head);
    insertAtTail(tail, 15);
    // print(head);
    insertAtTail(tail, 25);
    insertAtTail(tail, 10);
    insertAtTail(tail, 30);
    insertAtTail(tail, 10);
    print(head);
    removeDuplicate(head);
    print(head);

    return 0;
}