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
    int n;
    cin >> n;
    deque<int> a; 
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        a.push_back(in);
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int cnt = 0;
    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (a[i] > b[j])
        {
            a.push_front(b[j]);
            a.pop_back();
            cnt++;
        }
    }
    cout << cnt << endl;
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
