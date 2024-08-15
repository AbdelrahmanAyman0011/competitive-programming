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
    int w, h;
    stack<int> s;
    int ans = 0;
    while (n--)
    {
        cin >> w >> h;
        if (s.empty() || s.top() < h)
            s.push(h);
        else if (s.top() > h)
        {
            while (!s.empty() and s.top() > h)
            {
                s.pop();
                ans++;
            }
            if (s.empty() || s.top() != h)
                s.push(h);
        }
    }
    cout << ans + s.size() << endl;
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