#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

ll md (ll b , ll p ,ll m){
    ll res = 1;
    b = b%m;
    while(p > 0)
    {
        if(p % 2 == 1)
            res = (res * b) % m;
        p = p >> 1;
        b = (b * b) % m;
    }
    return res;
}
void solve(){
    int b,p,m;
        while(cin >>b >> p >> m){
            cout << md(b , p , m) << endl;
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
