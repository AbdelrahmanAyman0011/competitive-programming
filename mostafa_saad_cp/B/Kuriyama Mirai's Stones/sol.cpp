#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int n; cin >> n;
    vector<ll>v(n + 1),prefix(n + 1, 0), v2(n + 1);
    for(int  i = 0; i <= n ; i++){
        cin >> v[i];
        v2[i]=v[i];
        prefix[i] =prefix[i - 1]+ v[i];
    }
    sort(all(v2));
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
