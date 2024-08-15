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
    string res;
    string arr = "ROYGBIV";
    int cnt = 0;
    string extra = "GBIV";
    res = arr;
    for(int i = 7 ; i  < n ; i++){
        res += extra[(i - 7) % 4];
    }
    cout << res <<endl;
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
