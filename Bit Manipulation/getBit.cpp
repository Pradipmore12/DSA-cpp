#include<iostream>
using namespace std;
bool getBit(int n ,int pos){
    if((n & (1<<pos)) != 0)
        return 1;
    else
        return 0;
}
int main(){

    int n,pos;
    cin>>n>>pos;
    
    cout<<getBit(n,pos);

}