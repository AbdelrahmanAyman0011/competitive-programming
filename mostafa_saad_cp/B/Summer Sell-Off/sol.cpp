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
    ll days, size;
    cin >> days >> size;
    ll arr[days];
    ll sum = 0;
    for (int i = 0; i < days; i++)
    {
        ll pro, cl;
        cin >> pro >> cl;
        sum += min(pro, cl);
        if (cl > pro)
            arr[i] = min(2 * pro, cl) - min(pro, cl);
        else
            arr[i] = 0;
    }
    sort(arr, arr + days, greater<ll>());
    int c = 0;
    while (size and c < days)
    {
        if (arr[c] != 0)
        {
            sum += arr[c];
            size--;
        }
        c++;
    }
    cout << sum << endl;
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