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
    {
        cin >> v[i];
    }

    int mx = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;

        for (int l = i - 1; l >= 0; l--)
        {
            if (v[l] <= v[l + 1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        for (int r = i + 1; r < n; r++)
        {
            if (v[r] <= v[r - 1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        mx = max(mx, cnt);
    }

    cout << mx << endl;
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
