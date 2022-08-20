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
//Function to Check Floyed Loop Presence
bool floyedCheck(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL && slow != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
//function To get Meet point of slow and fast
Node *floyedMeetPoint(Node *&head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL && slow != NULL)
    {
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
        }
    }
    return NULL;
    
}

//Function to get start Node of Loop

Node *getStartNodeOfLoop(Node *&head){
    Node *fast=floyedMeetPoint(head);
    Node *slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

//Function to remove Floyed Loop
void floyedRemove(Node *&head){
    Node *start=getStartNodeOfLoop(head);
    Node *temp=start;
    while(temp->next!=start){
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    Node *head = new Node(3);
    Node *node1 = new Node(4);
    Node *node2 = new Node(5);
    Node *node3 = new Node(6);
    Node *node4 = new Node(7);
    Node *node5 = new Node(8);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node3;
    // print(head);
    //check floyed Loop
    if(floyedCheck(head)){
         cout<<"loop Exists"<<endl;
    }
       
    else{
        cout<<"loop not exists"<<endl;

    }

    Node *start=getStartNodeOfLoop(head);
    cout<<start->data<<endl;
    //Node *meet=floyedMeetPoint(head);
    //cout<<meet->data<<endl;
    
    //remove loop from LL
    
    floyedRemove(head);
    print(head);
    
    //check floyed loop
    if(floyedCheck(head)){
         cout<<"loop Exists"<<endl;
    }
       
    else{
        cout<<"Not exists"<<endl;

    }
        
    


    return 0;
}