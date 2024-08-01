#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n, v;
    cin >> n >> v;
    vector<int> a(n);
    vector<int> d(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> d[i];
    }
    
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(static_cast<double>(d[i]) / v <= a[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    Bedo
    int tt = 1;
    // cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
