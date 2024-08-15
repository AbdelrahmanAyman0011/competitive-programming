#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int x, y ,z; 
    y = sqrt((b * a)/c);
    x = a / y;
    z = c / x;
    cout << 4 *(y + x + z) << endl;

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
