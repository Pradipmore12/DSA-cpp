#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0; i<size;i++){

        ans=ans^arr[i];
    }
    cout<<ans<<endl;
    return 0;
}