using namespace std;
#include<string.h>
#include<iostream>
int hexaToDecimal(char arr[]){
    int len=strlen(arr);
    int ans=0;
    int base=1;
    for(int i=2;i>=0;i--){
        if(arr[i]<=9 && arr[i]>=0){
            ans+=base*(arr[i]-48);
            
        }
        else if(arr[i]>='A' && arr[i]<='F'){
            ans+=base*(arr[i]-55);
            
        } 
        else if(arr[i]>='a' && arr[i]<='f'){
            ans+=base*(arr[i]-87);
        }
        base*=16;

    }
    return ans;
}
    
int main(){
    char arr[3];
    cin>>arr;
    cout<<hexaToDecimal(arr)<<endl;

    return 0;


}