//Pascal Traingle
using namespace std;
#include <iostream>
int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncR(int n, int r)
{
    int ncR = fact(n) / (fact(n - r) * fact(r));
    return ncR;
}
void pascal(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncR(i, j) << " ";
        }
        cout << endl;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    pascal(n);
    return 0;
}