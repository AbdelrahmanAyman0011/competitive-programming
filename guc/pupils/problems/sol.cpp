#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n; cin>> n;
    ll x;
    ll minint = LLONG_MAX;
    ll sum = 0;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        if(x%2 == 1){
            cnt++;
            if(minint > x)
                minint = x;
            }
        sum += x;
    }
    if(cnt % 2 == 0)
        cout << sum;
    else
        cout << sum - minint;
    
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