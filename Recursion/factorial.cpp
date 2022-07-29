#include<iostream>
using namespace std;
int fact(int n){
    if(n==2){
        return 2;
    }
    int prevFact=fact(n-1);
    return n * prevFact;
}
int main(){

    int n;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}