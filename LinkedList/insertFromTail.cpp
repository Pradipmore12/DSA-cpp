#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    //constructor
    Node(int data){
        this ->data=data;
        this ->next=NULL;
    }
};
void print(Node *&head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node *&tail,int data){
    Node *temp=new Node(data);
    tail->next=temp;
    tail=temp;

}
void deleteAtTail(Node *&head,Node *&tail){
    Node *temp =head;
    while(temp->next!=tail){
        temp = temp->next;
    }
    temp->next=NULL;
    tail=temp;
}
int main(){
    Node *node1 = new Node(10);
    Node *tail =node1;
    Node *head =node1;
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);

    
    print(head);
    //deleteAtTail(head,tail);
    //print(head);
    
    



    return 0;

}