#include <iostream>
using namespace std;
int clearBit(int num, int pos)
{
    return (num ^ (1 << pos));
}
int main()
{
    int num, pos;
    cin >> num >> pos;
    cout << clearBit(num, pos) << endl;
    return 0;
}