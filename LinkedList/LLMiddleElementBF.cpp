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
void insertAtTail(Node *&tail,int data){
    if(tail==NULL){
        Node *temp=new Node(data);
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
        insertAtTail(tail,data);
    
    }

        
    
    

    return 0;
}
