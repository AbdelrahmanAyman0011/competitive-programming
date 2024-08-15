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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll ucnt = 0;
    ll zcnt = 0;
    sort(all(v));
    int l = 0, r = n - 1;
    bool f = 1;
    while (l <= r)
    {
        if (f)
        {
            ucnt += v[r];
            r--;
        }

        else
        {
            zcnt += v[l];
            l++;
        }
        f = !f;
    }
    cout << ucnt << " " << zcnt << endl;
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