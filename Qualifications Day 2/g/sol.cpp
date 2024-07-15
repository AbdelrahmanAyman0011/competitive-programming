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
    string s;
    cin >> s;
    map<char, int> freq;
    int mx = 0;
    for (auto &it : s)
        mx = max(mx, ++freq[it]);
    int cnt = 0;
    while (mx <= n / 2)
        cnt++, mx++, n++;
    cout << cnt << '\n';
}

int main()
{
    Bedo int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}