#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,main[100],dupl[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>main[i];
    }
    for(int i=0;i<n;i++){
        cout << main[i] << " ";
    }
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        dupl[i]=main[i];
    }
    for(int i=n-1;i>=n-k;i--){
        int pos=0;
        main[pos]=main[i];
        pos++;
    }
    for(int i=0;i<k;i++){
        main[i+k-1]=dupl[i];
    }
    for(int i=0;i<n;i++){
        cout << main[i] << " ";
    }



    return 0;
}