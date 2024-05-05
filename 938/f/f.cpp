#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int  a , b , c , d ; 
    cin >> a >> b >> c >> d;
    int res = a / 2 + b / 2 + c / 2 + d / 2; 
    d = d / 2 * 2;
    res += (((a&1)+(b&1)+(c&1))==3);
    cout << res << endl;

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
