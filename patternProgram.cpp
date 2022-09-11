#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,10,5,6,2};
    for(int i=0;i<5;i++){
        for(int j=0;j<arr[i];j++){
            for(int k=0;k<=j;k++){
                cout<<"* ";
            }
            cout<<" ";

        }
        cout<<endl;

    }
    return 0;
}