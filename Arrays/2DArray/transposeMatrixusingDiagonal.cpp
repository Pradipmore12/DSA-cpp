using namespace std;
#include<bits/stdc++.h>
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cin>>arr[i][j];

        }
    }
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<arr[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            cout<<arr[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}