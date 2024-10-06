#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Bedo                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);

void solve()
{
    int n, x;
    cin >> n >> x;
    set<int> v;
    int mx = 0;
    ll sum = 0;
    bool iszero = false;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.insert(a);
        if (a == 0)
        {
            iszero = true;
        }
        if (a > mx)
        {
            mx = a;
        }
        sum += a;
    }

    int mex = 0;
    if (!iszero)
    {
        cout << mex << endl;
        return;
    }

    ll all = (mx * (mx + 1)) / 2;  

    if (all == sum)
    {
        mex = mx + 1;
    }
    else
    {
        cout << all - sum << endl;
        return;
    }

    for (auto c : v)
    {
        int mod = mex % x;
        if (c == mod)
        {
            cout << mex + 1 << endl;
            return;
        }
    }

    cout << mex << endl;
}

int main()
{
    Bedo int t;
    cin >> t;  
    while (t--)
    {
        solve();  
    }
    return 0;
}
