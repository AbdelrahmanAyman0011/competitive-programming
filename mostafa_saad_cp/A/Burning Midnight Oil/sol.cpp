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

int check(int mid, int k, int n)
{
    int ans = mid;
    for (int i = 1; i < 30; i++)
    {
        int w = mid / pow(k, i);
        if (w > 0)
            ans += w;
        if (ans >= n || w <= 0)
            break;
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int l = 0, r = n, ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid, k, n) >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans;
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
