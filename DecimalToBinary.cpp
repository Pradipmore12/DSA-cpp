using namespace std;
#include<iostream>
int main(){
    int n,q,r;
    cin>>n;
    string binary="";
    int arr[n];
    while(q!=0){
        q=n/2;
        r=n%2;
        int i=0;
        arr[i]=r;
        
        //cout<<r<<"";
        //string b=(r);
        //binary+=b;
        n=q;
        q=n;
        i++;
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
    
    return 0;
}