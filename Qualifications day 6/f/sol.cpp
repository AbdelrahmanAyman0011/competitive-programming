#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n, y;
    cin >> n >> y;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int cntor = 0;
    for (int num : a) {
        cntor |= num;
    }
    
    if ((cntor | y) == y) {
        cout << 0 << endl;
        return;
    }
    

    for (int x = 0; x <= (1 << 30); ++x) {
        if ((cntor | x) == y) {
            cout << x << endl;
            return;
        }
    }
        cout << -1 << endl;
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
