//Floyeds Traingle
using namespace std;
#include <iostream>
int main()
{
    int n, num = 1;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}