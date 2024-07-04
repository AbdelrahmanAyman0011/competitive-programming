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
    ll i, j, k;
    ll n;
    string s, t;

    map<char, char> mp;

    cin >> s >> t;

    for (i = 0; i < s.length(); i++)
        mp[s[i]] = t[i];

    cin >> s;

    char ch;
    for (i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            cout << s[i];
            continue;
        }

        if (mp[s[i]])
            cout << mp[s[i]];

        else
        {
            if (isupper(s[i]))
            {
                ch = mp[s[i] + 32] - 32;
                cout << (ch);
            }

            else
            {
                ch = mp[s[i] - 32] + 32;
                cout << ch;
            }
        }
    }
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