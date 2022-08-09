using namespace std;
#include <bits/stdc++.h>
int main()
{
    int m;
    cin >> m;
    int arr[m][m];
    int transpose[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {

            transpose[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}