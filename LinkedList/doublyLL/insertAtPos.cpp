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
//Insert At Head
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    // add your node before head Node
    temp->next = head;
    // change prev pointer of head to temp
    head->prev = temp;
    // update head by temp/newly created Node
    head = temp;
}

// Insertion at TAil

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//insert at Position

void insertAtPos(Node *&head,int pos, int data){
    Node *iter=head;
    int count=1;
    while(count<pos-1){
        iter=iter->next;
        count++;
    }

    //insertion

    Node *nodeToInsert=new Node(data);
    nodeToInsert->next=iter->next;
    nodeToInsert->prev=iter;
    iter->next->prev=nodeToInsert;
    iter->next=nodeToInsert;

}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    // head->prev=NULL;
    print(head);
    insertAtTail(tail, 30);
    insertAtTail(tail, 20);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    print(head);
    insertAtPos(head,3,60);
    print(head);

    return 0;
}