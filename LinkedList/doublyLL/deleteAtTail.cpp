#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteAtTail(Node *tail){
    tail=tail->next;
    tail->next=NULL;
}
int main(){

    Node *node1=new Node(10);
    Node *head=node1;
    Node *node2=new Node(20);
    Node *node3=new Node(30);
    Node *tail=node3;

    node1->next=node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=node2;

    print(head);
    deleteAtTail(tail);
    //print(head);

    return 0;
}