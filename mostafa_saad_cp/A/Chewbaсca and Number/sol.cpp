#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] > '4')
            s[i] = '9' - s[i] + '0';

    if (s[0] == '0')
        s[0] = '9'; // "9"654 after inverting  will be "0"344
    cout << s;
}

int main()
{
    Bedo int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
