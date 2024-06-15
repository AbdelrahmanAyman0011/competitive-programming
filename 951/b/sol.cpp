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
bool sheft(int n, int i)
{
    return (n >> i) & 1;
}
void solve()
{
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < 31; i++)
    {
        if (sheft(x, i) + sheft(y, i) == 1)
        {
            cout << (1LL << i) << '\n';
            goto done;
        }
    }
    cout << 0 << '\n';
done:
{
};
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
