#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    ll n ,x ,h ,m ,s;
    cin >> n >> x >> h >> m >> s;
    ll cnt = h * 60 * 60 + m * 60 + s;
    if(cnt * x >= n)
        cout << 0 << endl;
    else
        cout << n - x * cnt << endl;
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}