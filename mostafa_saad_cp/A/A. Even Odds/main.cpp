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

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll mid = (n + 1) / 2;
    ll res;
    if (k <= mid)
        res = 2 * k - 1;
    else
        res = 2 * (k - mid);
    cout << res << endl;
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
