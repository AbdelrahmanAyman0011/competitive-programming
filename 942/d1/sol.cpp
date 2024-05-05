#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll n , m ;
    cin >> n >> m;
    ll res = 0; 
    for(int i = 1; i <= m ; i++){
        ll bb = (ll)i * i; 
        res += ((n + i) / bb);
    }
    cout << res - 1 << endl;
}

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
