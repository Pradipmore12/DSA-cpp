using namespace std;
#include <cmath>
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int originalno = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        // sum+=pow(digit,3);
        n /= 10;
    }
    if (sum == originalno)
        cout << "Amstrong No" << endl;
    else
        cout << "Not Amstrong No" << endl;
    return 0;
}