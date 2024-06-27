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

const int N = 1e6 + 5;
pair<int, int> pr[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> pr[i].first;
        pr[i].second = i;
    }
    sort(pr, pr + n);
    int q;
    cin >> q;
    while (q--) {
        int left, right;
        cin >> left >> right;
        --left; --right;
        int ans = 1e6, last = 1e6;
        for (int i = 0; i < n; ++i) {
            if (pr[i].second >= left && pr[i].second <= right) {
                ans = min(ans, abs(pr[i].first - last));
                last = pr[i].first;
            }
        }
        cout << ans << endl;
    }
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
