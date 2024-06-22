#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    ll n, m;
    while(cin >> n >> m && (n || m)){
        ll w = min(m , (n - m));
        vector <ll> num, denom;
        for(ll i = n; i > n - w; i--){
            num.push_back(i);
        }
        for(ll i = 1; i <= w; i++){
            denom.push_back(i);
        }
        for(size_t i = 0; i < num.size(); i++){
            for(size_t j = 0; j < denom.size(); j++){
                ll gc = __gcd(num[i], denom[j]);
                num[i] /= gc;
                denom[j] /= gc;
            }
        }
        ll sum1 = 1;
        for(size_t i = 0; i < num.size(); i++){
            sum1 *= num[i];
        }
        ll sum2 = 1;
        for(size_t i = 0; i < denom.size(); i++){
            sum2 *= denom[i];
        }
        cout << n << " things taken " << m << " at a time is " << sum1 / sum2 << " exactly.\n";
    }
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
