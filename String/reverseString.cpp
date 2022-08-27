#include <bits/stdC++.h>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin >> num;
    string given;
    cin >> given;
    sort(given.begin(), given.end());
    for (int i = given.length() - 1; i >= 0; i--)
    {
        cout << given[i] << "";
    }
    return 0;
}