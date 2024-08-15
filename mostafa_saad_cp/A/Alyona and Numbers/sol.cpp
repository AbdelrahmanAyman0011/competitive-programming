#include <iostream>
#include <map>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    map<ll, ll> mp1;
    map<ll, ll> mp2;

    for (int i = 1; i <= n; i++)
        mp1[i % 5]++;

    for (int i = 1; i <= m; i++)
        mp2[i % 5]++;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 5 == 0) {
                cnt += mp1[i] * mp2[j];
            }
        }
    }
    cout << cnt;
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
