#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll n, m, a;
    cin >> n >> m >> a;
    ll w = n / a;
    if (n % a > 0)
        w++;
    ll h = m / a;
    if (m % a > 0)
        h++;
    cout << w * h << endl;
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
