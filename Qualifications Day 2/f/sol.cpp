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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt1 = 0, cnt2 = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            cnt1++;
        else if (v[i] == -1)
            cnt2++;
        else if (v[i] == 0)
        {
            if (flag)
                cnt1++;
            else
                cnt2++;
            flag = !flag;
        }
    }
    if (cnt1 > cnt2)
        cout << "Chess\n";
    else if (cnt1 < cnt2)
        cout << "Lol\n";
    else
        cout << "Go deploying\n";
}

int main()
{
    Bedo
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
