#include <bits/stdc++.h>
using namespace std;
int cnt = 5;
void print()
{
    if (cnt == 0)
        return;
    cout << cnt << " ";
    cnt--;
    print();
}
int main()
{
    print();
    return 0;
}