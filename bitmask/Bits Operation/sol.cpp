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
    int q;
    ll n;
    cin >> q >> n;
    while (q--)
    {
        int s;
        cin >> s;
        if (s == 1)
        {
            ll x;
            cin >> x;
            n |= x;
        }
        else if (s == 2)
        {
            ll x;
            cin >> x;
            n &= x;
        }
        else if (s == 3)
        {
            ll x;
            cin >> x;
            n ^= x;
        }
        else if (s == 4)
        {
            n = ~n;
        }
        cout << n << endl;
    }
}

int main()
{
    Bedo
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
