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
    string s;

    cin >> n;
    cin >> s;

    string res;

    for (int i = n - 2; i >= 0; i -= 2)
        res += s[i];

    for (int i = (n % 2 == 0); i < n; i += 2)
        res += s[i];

    cout << res << '\n';
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
