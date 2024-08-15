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
    int t1, t2, x1, x2, t0;
    cin >> t1 >> t2 >> x1 >> x2 >> t0;
    int y2 = (t0 - t1) * x1 / (t2 - t0);
    y2 = min(y2, x2);
    int y1 = x1 - y2;
    cout << y1 << " " << y2 << endl;
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