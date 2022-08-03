using namespace std;
#include <math.h>
#include <iostream>
int binaryToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        ans += lastdigit * pow(2, i);
        n /= 10;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n);

    return 0;
}