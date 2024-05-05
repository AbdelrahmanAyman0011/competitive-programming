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

ll sum(ll k)
{
    return k * (k + 1) / 2;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    n--;
    ll s = sum(--k);
    if (s < n)
        cout << "-1";
    else
    {
        ll l = 0, r = k;
        while (l <= r)
        {
            ll m = l + (r - l) / 2;
            if (s - sum(m) < n)
                r = m - 1;
            else
                l = m + 1;
        }
        cout << k - r;
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
