#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n , k;
    cin >> n >> k;
    vector<int>num;
    int t;
    for (int i = 0; i < k; i++)
    {
        cin >> t;
        num.push_back(t);
    }
    sort(all(num));
    int ans = 0;
    for(int i = 0 ; i < k - 1 ; i++)
        ans += 2 * num[i] - 1;
    cout << ans << endl;
}

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}