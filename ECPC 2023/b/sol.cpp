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
ll mod = 1e9+7;

void solve()
{
    string x;
    cin >> x;
    vector<pair<char, long long>> pr;
    pr.push_back({x[0], 1});
    for (int i = 1; i < x.size(); ++i)
    {
        if (x[i] == pr.back().first)
        {
            pr.back().second++;
        }
        else
        {
            pr.push_back({x[i], 1});
        }
    }
    cout << pr.size() << " ";
    long long int cnt = 1;
    for (auto &c : pr)
    {
        cnt %= mod;
        cnt *= c.second;
        cnt %= mod;
    }
    cout << cnt << endl;
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