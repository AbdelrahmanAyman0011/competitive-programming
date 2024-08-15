#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
const long double PI = acos(-1.0);

const ll MOD = 1e9 + 7;  // Correction here
ll fp(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

ll sub(ll a, ll b) {
    return (a % MOD - b % MOD + MOD) % MOD;
}

void solve() {
    ll l, r, k;
    cin >> l >> r >> k;
    if (k > 9) {
        cout << "0\n";
        return;
    }
    ll mx = (10 + k - 1) / k; // Maximum multiple of k within 1 to 10
    cout << sub(fp(mx, r), fp(mx, l - 1)) << endl; // Corrected: l-1 to include l itself in the range
}

int main() {
    Bedo
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
