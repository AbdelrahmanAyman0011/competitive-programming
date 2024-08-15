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
    string s, add;
    cin >> s >> add;
    string a = "";
    string b = "";
    bool del = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            del = true;
            continue;
        }
        if (del)
        {
            b += s[i];
        }
        else
        {
            a += s[i];
        }
    }
    int l = 0;
    while (l < add.size())
    {
        if (a.size() > b.size())
        {
            b += add[l];
        }
        else
        {
            a += add[l];
        }
        l++;
    }
    if (a.size() != b.size())
    {
        cout << "Impossible";
    }
    else
    {
        cout << a << '|' << b;
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
