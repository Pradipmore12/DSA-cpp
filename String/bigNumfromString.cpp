#include<bits/stdc++.h>    
#include<algorithm>
using namespace std;
int main(){
    string sample;
    cin>>sample;
    sort(sample.begin(),sample.end(),greater<int>());
    cout<<stoi(sample);
    return 0;
}