#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n , f; cin >> n >> f;
    vector<int> pro(n), cus(n);
    vector<pair<int, int>> mx;

    for(int i = 0; i < n ; i++) {
        cin >> pro[i] >> cus[i];
    }
    for(int i = 0 ; i < n ; i++) {
        if(cus[i] > pro[i]) {
            int r = cus[i] - pro[i];
            int res = abs(r - cus[i]);
            mx.push_back({res, i});
        } else {
            int r = cus[i];
            int res = min(2 * pro[i], cus[i]) - r;
            mx.push_back({res, i}); 
        }
    }

    sort(mx.rbegin(), mx.rend());
    ll cnt = 0;

    for(int i = 0; i < f && i < mx.size(); i++) {
        int index = mx[i].second;
        cnt += min(2 * pro[index], cus[index]);
    }
    for(int i = f ; i < mx.size() ;i ++) {
        int index = mx[i].second;
        cnt += min(pro[index], cus[index]);
    }
    cout << cnt;
    cout << endl;
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
