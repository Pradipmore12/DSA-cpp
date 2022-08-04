using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int originalno = n;
    int reverse = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n /= 10;
    }
    if (reverse == originalno)
    {
        cout << "pallindrome No" << endl;
    }
    else
        cout << "Not Pallindromw" << endl;
    return 0;
}
