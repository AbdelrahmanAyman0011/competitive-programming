#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo      \
    cin.tie(0);   \
    cout.tie(0);  \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

void solve()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
    set<pair<int, int>> wasteCells;
    int a, b;
    while (k--)
    {
        cin >> a >> b;
        wasteCells.insert({a, b});
    }

    while (t--)
    {
        cin >> a >> b;
        int cellIndex = (a - 1) * m + b;
        auto it = wasteCells.lower_bound({a, b});

        if (it != wasteCells.end() && it->first == a && it->second == b)
        {
            cout << "Waste\n";
        }
        else
        {
            int wasteBefore = distance(wasteCells.begin(), it);
            int effectiveIndex = cellIndex - wasteBefore - 1;

            if (effectiveIndex % 3 == 0)
                cout << "Carrots\n";
            else if (effectiveIndex % 3 == 1)
                cout << "Kiwis\n";
            else
                cout << "Grapes\n";
        }
    }
}

int main()
{
    Bedo;
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
