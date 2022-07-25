using namespace std;
#include<iostream>
void decimalToOctal(int n){
    int i=0;
    int arr[20];
    while(n>0){
        arr[i]=n%8;
        n/=8;
        i++;

    }
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    decimalToOctal(n);
    return 0;
}