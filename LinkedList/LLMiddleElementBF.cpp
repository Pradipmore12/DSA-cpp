#include<bits/stdC++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void print(Node *&head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node *&head,Node *&tail,int data){
    Node *temp=new Node(data);
    if(tail==NULL){
        tail=temp;
        head=temp;
    }
    else{
        tail->next=temp;
        tail=temp;

    }

}
int main(){
    Node *head=NULL;
    Node *tail=NULL;
    int n,i=0;
    cout<<"how many Elements"<<endl;
    cin>>n;
    while(i<n)
    {
        int data;
        insertAtTail(head,tail,data);
    
    }

        
    
    

    return 0;
}
