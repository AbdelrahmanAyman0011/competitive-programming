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

bool knowbit(ll n, int i)
{
    return (n >> i) & 1;
}

ll setbit(ll n, int i)
{
    return n | (1LL << i);
}

ll resetbit(ll n, int i)
{
    return n & (~(1LL << i));
}

ll flib(ll n, int i)
{
    return n ^ (1LL << i);
}

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    else
        return !(n & (n - 1));
}

vector<vector<int>> res;

void solve()
{
    int s[20];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    res.clear();

    for (int i = 0; i < (1 << n); i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if (knowbit(i, j) == 1)
                v.push_back(s[j]);
        }
        res.push_back(v);
    }

    sort(all(res));

    for (auto c : res)
    {
        for (auto i : c)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    Bedo
    int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
