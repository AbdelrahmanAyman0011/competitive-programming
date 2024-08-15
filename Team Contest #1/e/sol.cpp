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
    int a, b, k;
    cin >> a >> b >> k;
    vector<int> v;
    for (int i = 1; i <= k; i++)
    {
        int ans = a * i + b;
        v.push_back(ans);
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << v[i];
    }
    cout << endl;
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
