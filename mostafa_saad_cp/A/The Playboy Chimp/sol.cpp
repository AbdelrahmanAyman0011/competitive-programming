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

int up(vector<int> &v, int num)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] <= num)
            lo = mid + 1;
        else if (v[mid] > num)
            hi = mid - 1;
    }
    if (lo >= v.size())
        return -1;
    return v[lo];
}

int down(vector<int> &v, int num)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] < num)
            lo = mid + 1;
        else if (v[mid] >= num)
            hi = mid - 1;
    }
    if (hi < 0)
        return -1;
    return v[hi];
}
void solve()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        int first = down(v, num);
        int second = up(v, num);

        if (first == -1)
            cout << "X";
        else
            cout << first;
        if (second == -1)
            cout << " X" << endl;
        else
            cout << " " << second << endl;
    }
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
