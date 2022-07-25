using namespace std;
#include<iostream>
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(int j=n-i+1;j<=n;j++){
            cout<<k--;
        }
        k=2;
        for(int j=n+1;j<=n+i-1;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}
