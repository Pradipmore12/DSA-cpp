#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "aqfeasscjissd";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i] - 'a']++;
    }
    int max = 0;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            ans = 'a' + i;
        }
    }
    cout << max << " " << ans << endl;
    return 0;
}
