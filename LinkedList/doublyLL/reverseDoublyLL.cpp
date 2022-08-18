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
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void inserAtTail(Node *&head,Node *&tail,int data){
    if(tail==NULL){
        Node *temp=new Node(data);
        tail=temp;
        head=temp;

    }
    else{
        Node *temp=new Node(data);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;

    }
}
Node * reverseLL(Node *head){
    Node *curr=head;
    Node *forward=head;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=curr->prev;
        curr=forward;


    }
    return curr;


}
int main(){
    Node * head=NULL;
    Node * tail=NULL;
    inserAtTail(head,tail,10);
    inserAtTail(head,tail,20);
    inserAtTail(head,tail,30);
    print(head);
    Node *newhead=reverseLL(head);
    print(newhead);



    return 0;
}