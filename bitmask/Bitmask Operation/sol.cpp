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
    return n | (1 << i);
}

ll resetbit(ll n, int i)
{
    return n & (~(1 << i));
}

ll flib(ll n, int i)
{
    return n ^ (1 << i);
}

void solve()
{
    int q;
    ll n;
    cin >> q >> n;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int x;
            cin >> x;
            cout << knowbit(n, x) << endl;
        }
        else if (op == 2)
        {
            int x;
            cin >> x;
            n = setbit(n, x);
            cout << n << endl;
        }
        else if (op == 3)
        {
            int x;
            cin >> x;
            n = resetbit(n, x);
            cout << n << endl;
        }
        else if (op == 4)
        {
            int x;
            cin >> x;
            n = flib(n, x);
            cout << n << endl;
        }
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
