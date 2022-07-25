using namespace std;
#include<iostream>
bool isPrime(int num){
    for(int i=2;i<num;i++){
        if(num==1 || num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
             cout<<i<<endl;

        }
           

    }
    return 0;
}