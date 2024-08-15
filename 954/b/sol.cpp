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
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool f = true;
            ll mx = -1;
            if (j > 0)
            {
                if (v[i][j] <= v[i][j - 1])
                    f = false;
                mx = max(mx, v[i][j - 1]);
            }
            if (j < m - 1)
            {
                if (v[i][j] <= v[i][j + 1])
                    f = false;
                mx = max(mx, v[i][j + 1]);
            }
            if (i > 0)
            {
                if (v[i][j] <= v[i - 1][j])
                    f = false;
                mx = max(mx, v[i - 1][j]);
            }
            if (i < n - 1)
            {
                if (v[i][j] <= v[i + 1][j])
                    f = false;
                mx = max(mx, v[i + 1][j]);
            }
            if (f)
                v[i][j] = mx;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
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
