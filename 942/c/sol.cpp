#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    ll maxScore = 0;
    for (int i = 1; i <= n; ++i) {
        ll cardsNeeded = max(0LL, (n - i + 1) * a[i - 1] - k);
        maxScore += max(0LL, (a[i - 1] - cardsNeeded) * (a[i - 1] - cardsNeeded + 1) / 2);
        k -= max(0LL, (n - i + 1) * a[i - 1]);
    }

    cout << maxScore << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
