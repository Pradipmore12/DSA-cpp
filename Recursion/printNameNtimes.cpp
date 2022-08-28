#include<bits/stdc++.h>
using namespace std;
int cnt=0;
void print(string name,int num){
    if(cnt==num)
        return;
    cout<<name<<" ";
    cnt++;
    print(name,num);
}
int main(){
    cout<<"enter name"<<endl;
    string name;
    int num;
    cin>>name;
    cout<<"enter how many times your name should print"<<endl;
    cin>>num;

    print(name,num);
    return 0;
}