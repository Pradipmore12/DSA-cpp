using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
    }
    if (i == n)
        cout << "Prime";
    return 0;
}