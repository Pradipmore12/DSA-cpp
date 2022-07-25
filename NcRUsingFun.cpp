using namespace std;
#include<iostream>
int fact(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(n-r)*fact(r))<<endl;
    return 0;
 }