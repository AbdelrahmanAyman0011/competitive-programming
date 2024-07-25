#include <iostream>
#include <map>
#include <cmath>

using namespace std;

typedef long long ll;

// Function to get the prime factorization of a number
map<ll, int> primeFactorization(ll n) {
    map<ll, int> factors;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        factors[n]++;
    }
    return factors;
}

void solve() {
    ll x, y;
    cin >> x >> y;

    if (x == y) {
        cout << 0 << endl;
        return;
    }

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
