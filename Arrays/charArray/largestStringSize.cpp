//largest string size
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int currlen = 0, mxlen = 0;
    int i = 0;
    while (1)
    {
        if (arr[i] == ' ')
        {
            if (currlen > mxlen)
            {
                mxlen = currlen;
            }
        }
        else
        {
            currlen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << mxlen << endl;
    return 0;
}