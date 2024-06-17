#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);
ll sum (ll n){
    return n *(n + 1) / 2;
}

void solve(){
    // k = min (n,b)  b < a  then k = 0
    ll n , a ,b; cin >> n >> a >> b;
    if(a >= b)
        cout << n*a << endl;
    else
    {
        ll res = min (b - a, n);
        cout << sum(b) - sum (b - res) + (a * (n - res))<< endl; 
    }
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
