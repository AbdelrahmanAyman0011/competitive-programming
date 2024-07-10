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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> at = a;
    at.insert(at.end(), a.begin(), a.end());

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        bool m = true;
        for (int j = 0; j < n; j++)
        {
            if (at[i + j] != b[j])
            {
                m = false;
                break;
            }
        }
        if (m)
        {
            flag = true;
            break;
        }
    }
    if(flag)
        yes
    else
        no
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