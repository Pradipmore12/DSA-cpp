#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=row+1;i>=1;i--){
        for(int j=1;j<2*row-1;j++){
            if(j==i || j==row+1 ){
                cout<<"*";
            }
            else
            cout<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}