using namespace std;
#include<iostream>
int main(){
    int row;
    int col;
    cout<<"enter the no of roew and col"<<endl;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
