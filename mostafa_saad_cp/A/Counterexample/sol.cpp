#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll l , r; cin >> l >> r;
    if(l % 2 != 0)
        l++;
    if(abs(l - r) < 2)
        cout << -1 <<endl;
    else
        cout << l << " " << l + 1 << " "<< l + 2 << endl;
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
