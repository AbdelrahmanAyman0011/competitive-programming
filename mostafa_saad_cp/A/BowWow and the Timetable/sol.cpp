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

    int n = s.size();
    int res = n / 2;
    if (n % 2 == 0)
    {
        cout << res << endl;
    }
    else
    {
        int ct = 0;
        for (auto e : s)
            if (e == '1')
                ct++;
        cout << res + (ct > 1) << endl;
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
