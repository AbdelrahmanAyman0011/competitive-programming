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

const int MXN = 1e5 + 5;
int n, k;
int a[MXN];

bool can(int distance)
{
    int current_val = a[0], ptr = 1, cntr = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - current_val >= distance)
        {
            cntr++;
            current_val = a[i];
        }
    }
    if (cntr >= k)
        return true;
    return false;
}
void solve()
{
    int num_tests;
    cin >> num_tests;
    for (int test = 0; test < num_tests; test++)
    {
        /* Read the input */
        cin >> n >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        /* Sort the array */
        sort(a, a + n);

        /* Binary search */
        int hi = 1e9 + 7, lo = 0, mid;
        while (lo < hi - 1)
        {
            mid = (lo + hi) / 2;
            if (can(mid))
                lo = mid;
            else
                hi = mid - 1;
        }
        if (can(hi))
            cout << hi << endl;
        else
            cout << lo << endl;
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
