using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}