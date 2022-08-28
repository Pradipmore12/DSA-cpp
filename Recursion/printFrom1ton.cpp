#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
void print()
{
    if (cnt == 11)
        return;
    cout <<cnt<<" ";
    cnt++;
    print();
}
int main()
{
    print();
    return 0;
}