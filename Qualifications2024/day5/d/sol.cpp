#include <bits/stdc++.h>
using namespace std;
#define DE4A                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define mp(a, b) make_pair(a, b)
void mfile()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{

    DE4A
    mfile();

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    for (int i = 0; i < n; ++i)
        a[i] -= b[i];

    sort(a.begin(), a.end(), greater<int>());

    ll diff = 0, cnt = 0;

    for (int i = 0; i < n; ++i)
        if (diff + a[i] >= 0)
            cnt++, diff += a[i];
        else 
            break;
    cout << cnt << "\n";
}