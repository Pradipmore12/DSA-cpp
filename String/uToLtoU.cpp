#include<bits/stdc++.h>
using namespace std;
int main(){

    string sample;
    cin>>sample;
    for(int i=0;i<sample.length();i++){
        if(sample[i]>='a' && sample[i]<='z'){
            sample[i]=sample[i]-32;
        }
        else if(sample[i]>='A' && sample[i]<='Z'){
            sample[i]=sample[i]+32;
        }
    }
    cout<<"Converted String :"<<sample<<endl;
    return 0;
}