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

void solve()
{
    string s, s1, s2, s3;
    cin >> s >> s1;
    for (auto &c : s)
        s2 += tolower(c);
    for (auto &c : s1)
        s3 += tolower(c);
    int x = s2.compare(s3);
    cout << x;
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
