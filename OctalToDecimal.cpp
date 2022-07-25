using namespace std;
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
int octalToDecimal(int n){
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
        ans+=digit*pow(8,i);
        n/=10;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<octalToDecimal(n)<<endl;
    return 0;
}