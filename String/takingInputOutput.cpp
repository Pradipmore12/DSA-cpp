using namespace std;
#include<iostream>
#include<string>
int main(){
    string s1;
    //cin>>s1;
    //cout<<s1<<endl;

    //2md way

    string s2(4,'s');
    //cout<<s2<<endl;

    string s3;
    getline(cin,s3);
    cout<<s3<<endl;
    return 0;
}