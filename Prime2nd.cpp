using namespace std;
#include<iostream>
int main(){
    int n;
    cin>>n;
    bool prime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            prime=false;
            break;
            
        }
    }
    if(prime)
    cout<<"Prime"<<endl;

    return 0;
}