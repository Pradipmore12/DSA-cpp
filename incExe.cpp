//Inclusion Exclusion Priciple Example
#include <bits/stdc++.h>
using namespace std;
int incExe(int n, int a, int b)
{
    int divA = n / a;
    int divB = n / b;
    int divBoth = n / (a * b);
    return divA + divB - divBoth;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << incExe(n, a, b) << endl;
    return 0;
}
