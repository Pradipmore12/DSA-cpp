#include<bits/stdc++.h>
using namespace std;

//initiate a Node class

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data=data;
        this ->next = NULL;

    }
};
int main(){
    Node* node1 = new Node(20);
    cout<<node1 ->data <<" " << node1 ->next<<endl;


    return 0;
}