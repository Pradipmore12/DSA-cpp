using namespace std;
#include<iostream>
void decimalTobinary(int n){
    int binaryArr[20];
    int i=0;
    while(n>0){
        binaryArr[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        cout<<binaryArr[j];
    }
    return;

}
int main(){
    int n;
    cin>>n;
    decimalTobinary(n);
    return 0;
}