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
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory got free deleted element is"<<val<<endl;
    }
};
void print(Node *&tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;

    } while (temp != tail);
    cout << endl;

}

//Insertion Code Starts here
void insertNode(Node *&tail, int element, int data)
{
    // assuming element is present in list
    Node *nodeToInsert = new Node(data);
    Node *temp = tail;

    // if tail==null
    if (temp == NULL)
    {
        tail = nodeToInsert;
        nodeToInsert->next = nodeToInsert;
    }
    // element is present
    else
    {
        while (temp->data != element)
        {
            temp = temp->next;
        }
        // then we will get node which contain element as data
        nodeToInsert->next = temp->next;
        temp->next = nodeToInsert;
    }
}

//deletion Code starts here

void deleteAtPos(Node *&tail,int pos){
    Node *temp=tail;
    int start=1;
    while(start<pos -1){
        temp=temp->next;
        start++;
    }
    //we will get node at position before to pos
    Node *nodetoDelete=temp->next;
    temp->next=temp->next->next;
    delete nodetoDelete;
}
int main()
{
    Node *tail = NULL;
    int element = 5;
    insertNode(tail, element, 6);
    print(tail);
    insertNode(tail, 6, 7);
    print(tail);
    insertNode(tail, 7, 9);
    insertNode(tail, 9, 10);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);
    deleteAtPos(tail,3);
    print(tail);

    return 0;
}