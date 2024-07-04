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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c == d)
        cout << a;
    else if (c < d)
        cout << (d - c - 1) * (a + 2 * b) + 2 * b;
    else
        cout << (c - d - 1) * (a + 2 * b) + 2 * (a + b);
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