using namespace std;
#include <bits/stdc++.h>
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = false;
        }
    }

    if (check)
    {
        cout << "pallindrome" << endl;
    }
    else
        cout << "not a pallindrome" << endl;

    return 0;
}