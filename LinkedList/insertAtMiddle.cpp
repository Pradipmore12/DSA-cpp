#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while (temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void insertAtMiddle(Node* &head,int pos,int data){
    Node* temp=head;
    int count=1;
    while(count<pos){
        temp=temp->next;
        count++;
    }
    //Insertion node creation

    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

int main(){
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node * head=node1;
    node1->next=node2;
    print(head);
    insertAtMiddle(head,2,30);
    print(head);


    return 0;

}