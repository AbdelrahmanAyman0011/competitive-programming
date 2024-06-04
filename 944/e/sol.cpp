#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vd vector<double>
#define all(v) v.begin(), v.end()

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<ll> a(k + 1), b(k + 1);
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> b[i];
    }
    while (q--)
    {
        ll d;
        cin >> d;
        if (d == n)
        {
            cout << b[k] << ' ';
            continue;
        }
        int i = upper_bound(a.begin(), a.end(), d) - a.begin() - 1;
        d -= a[i];
        ll dis = a[i + 1] - a[i];
        ll time = b[i + 1] - b[i];
        cout << b[i] + d * time / dis << ' ';
    }
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << '\n';
    }

    return 0;
}
