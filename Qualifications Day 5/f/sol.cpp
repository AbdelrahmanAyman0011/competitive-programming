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
int c(const vector<int> &arr)
{
    int count = 0;
    for (int element : arr)
    {
        if (element != 0)
        {
            ++count;
        }
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int max_lit = 0;

    for (int i = 0; i < n; i++)
    {
        pq.push(i + vec[i]);

        while (!pq.empty() && pq.top() <= i)
        {
            pq.pop();
        }

        max_lit = max(max_lit, (int)(pq.size()));
    }

    cout << max_lit << endl;
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