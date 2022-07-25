using namespace std;
#include<iostream>
int main(){
    int n;
    cin>>n;
    int fact=1;
    for(int i=n;i>=2;i--){
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}