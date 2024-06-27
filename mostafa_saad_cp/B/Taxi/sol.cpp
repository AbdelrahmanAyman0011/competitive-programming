#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Bedo                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a < c)
    {
        if (a + b >= c)
        {
            a = c;
            break;
        }
        a += b;
        if (c - d <= a)
            break;
        c -= d;
    }
    cout << a;
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
