using namespace std;
#include <iostream>
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++){
            cout<<"* ";
        }
        for(int j=n+1;j<=n+i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++){
            cout<<"* ";
        }
        for(int j=n+1;j<=n+i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}