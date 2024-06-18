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

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second > b.second;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);

    int cnt = 0, ans = 0;
    for (int i = 0; i < m; ++i) {
        int r = a[i].first;
        while (r > 0 && cnt < n) {
            cnt++;
            ans += a[i].second;
            r--;
        }
    }

    cout << ans << endl;
}

int main() {
    Bedo
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
