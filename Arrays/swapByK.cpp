#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,main[100],dupl[100];
    cin>>n;
    //taking array elements
    for(int i=0;i<n;i++){
        cin>>main[i];
    }
    //print the given array
    for(int i=0;i<n;i++){
        cout << main[i] << " ";
    }
    int k;
    cin>>k;
    //storing first k elements in main array to duplicate array 
    for(int i=0;i<k;i++){
        dupl[i]=main[i];
    }
    cout<<endl<<"duplicate array"<<endl;
    for(int i=0;i<k;i++){
        cout<<dupl[i]<<" ";
    }
    //swapping last k elements in main array to first k positions
    for(int i=0;i<k;i++){
        main[i]=main[n-1-i];
        
    }
    cout<<endl<<"duplicate array"<<endl;
    for(int i=0;i<n;i++){
        cout << main[i] << " ";
    }



    //shiftnig first k elements in main array to their kth position 
    for(int i=0;i<k;i++){
        main[i+k]=dupl[i];
    }
    //printing the resulting array
    for(int i=0;i<n;i++){
        cout << main[i] << " ";
    }



    return 0;
}