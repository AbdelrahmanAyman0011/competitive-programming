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
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a11 = (r1 + c1 - d2) / 2;
    int a12 = r1 - a11;
    int a21 = c1 - a11;
    int a22 = d1 - a11;
    if (a11 != a12 && a11 != a21 && a11 != a22 && a12 != a21 && a12 != a22 && a21 != a22 && a11 >= 1 && a11 <= 9 && a12 >= 1 && a12 <= 9 && a21 >= 1 && a21 <= 9 && a22 >= 1 && a22 <= 9 && a21 + a22 == r2 && a12 + a22 == c2 && a12 + a21 == d2)
    {
        cout << a11 << " " << a12 << endl;
        cout << a21 << " " << a22 << endl;
    }
    else
    {
        cout << -1 << endl;
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
