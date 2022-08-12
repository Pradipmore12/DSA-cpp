///hexa to decimal
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int hexaToDecimal(string n)
{
    int size = n.size();
    int base = 1;
    int ans = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += base * (n[i] - '0');
        }
        else if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += base * (n[i] - 'A' + 10);
        }
        base *= 16;
    }
    return ans;
}

int main()
{
    string n;
    cin >> n;
    cout << hexaToDecimal(n) << endl;
    return 0;
}
