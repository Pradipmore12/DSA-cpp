#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=11;
    for(int i=1;i<=11;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}