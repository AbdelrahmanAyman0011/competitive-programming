#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI = acos(-1.0);

void solve() {
    int n, a;
    cin >> n >> a;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cri = 0;
    a--;

    if (v[a] == 1)
        cri++;

    int l = a - 1, r = a + 1;
    while (l >= 0 || r < n) {
        if (l >= 0 && r < n) {
            if (v[l] == 1 && v[r] == 1)
                cri += 2;
        } else if (l >= 0) {
            if (v[l] == 1)
                cri++;
        } else if (r < n) {
            if (v[r] == 1)
                cri++;
        }
        l--;
        r++;
    }

    cout << cri << endl;
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
