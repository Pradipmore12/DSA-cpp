using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int current=2;
    int j=2;
    int pd=arr[1]-arr[0];
    while(j<n){
        if(arr[j]-arr[j-1]==pd){
            current++;
        }
        else {
            pd=arr[j]-arr[j-1];
            current=2;
        }
        
        j++;
    }
    cout<<current<<endl;
    return 0;
}