#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
const long double PI = acos(-1.0);

void solve() {
    int n;

    while(cin >> n && n) {
        int cnt = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(__gcd(v[i], v[j]) == 1) {
                    cnt++;
                }
            }
        }

        if(cnt == 0) {
            cout << "No estimate for this data set." << endl;
        } else {
            cout << fixed << setprecision(6) << sqrt(6.0 * (n * (n - 1) / 2) / cnt) << endl;
        }
    }    
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
