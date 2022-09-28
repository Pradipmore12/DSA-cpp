#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int size;
        int *arr;
        int top;
    Stack(int N){
        size=N;
        top=-1;
        arr=new int[size];
    }
    void push(int data){
        if(top>=size){
            top++;
            arr[top]=data;
        }
        else
            cout<<"stack overflow"<<endl;
        
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow"<<endl;
        }
        else{
            cout<<"popped element is :"<<arr[top];
            top--;
        }
        
    }
    int  peek(){
        if(top==-1){
            cout<<"there is no elements in stack"<<endl;
        }
        else{
            return arr[top];
        }
    }

};
int main(){
    Stack s1(4);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    cout<<s1.peek()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.pop();
    s1.pop();
    cout<<s1.peek()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();





    return 0;
}