//factorial of Number using Function
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
int main()
{
    int num;
    cin >> num;
    cout << fact(num) << endl;
    return 0;
}