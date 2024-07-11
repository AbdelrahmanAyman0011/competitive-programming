#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

ll a , b , c ,d; 
bool ok (ll x){
	return a * x * x * x + b * x * x + c * x + d == 0;
}
void solve() {
    cin >> a >> b >> c >> d;
    ll ans = -999999;
    if(ok(0))
        ans = 0;
    
        for(ll i = 1 ; i * i <= abs(d) ; i++){
            if(d % i == 0){
                if(ok(i))
                    ans = i;
                if(ok(-i))
                    ans = -i;
                if(ok(d/i))
                    ans = d/i;
                if(ok(-d/i))
                    ans = -d/i;

            }
        
    }
    if(ans != -999999)
    {
        cout << "Yes\n";
        cout << ans << endl;
    }
    else 
        cout << "No\n";
}

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}