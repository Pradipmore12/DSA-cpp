using namespace std;
#include <iostream>
int main()
{
    int n;
    cin >> n;
    int s = 0, e = 1;
    int i = 3;
    cout << s << e;
    while (i <= n)
    {

        int next = s + e;
        cout << next;
        s = e;
        e = next;
        i++;
    }
    return 0;
}