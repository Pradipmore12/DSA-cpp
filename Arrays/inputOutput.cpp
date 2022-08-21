#include <bits/stdC++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}