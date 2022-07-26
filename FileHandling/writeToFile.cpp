#include<bits/stdc++.h>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    string name="pradip";
    ofstream myfile("sample.txt",ios::app);
    myfile<<name;
    myfile.close();
    cout<<"operation performed successfully"<<endl;
    string next;
    ifstream myfile2("sample.txt");
    getline(myfile2,next);
    cout<<next<<endl;

        return 0;
}