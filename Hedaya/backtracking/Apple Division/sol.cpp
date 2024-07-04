Code
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

int n, arr[22];
ll totalsum = 0, mindiff = LLONG_MAX;

void apple(int i, ll s1)
{
    if (i == n)
    {
        ll s2 = totalsum - s1;
        mindiff = min(mindiff, abs(s1 - s2));
        return;
    }

    apple(i + 1, s1 + arr[i]);
    apple(i + 1, s1);
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        totalsum += arr[i];
    }
    apple(0, 0);
    cout << mindiff << "\n";
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
