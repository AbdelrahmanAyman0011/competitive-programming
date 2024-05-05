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
    int arr[n + 1];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int cnt = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            cnt = min(cnt, (arr[i + 1] - arr[i]));
        }
    }
    if (cnt == INT_MAX)
    {
        cout << -1;
    }
    else
        cout << cnt / 2;
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
