//inverted HAlf Pyramid
using namespace std;
#include <iostream>
int main()
{
    /*int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1; j<=row-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }*/
    // second method
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}