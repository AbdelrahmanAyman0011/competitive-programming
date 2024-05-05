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
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        res += r - l + 1;
    }
    int moves = 0;
    while (res % k != 0)
    {
        moves++;
        res++;
    }
    cout << moves;
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
