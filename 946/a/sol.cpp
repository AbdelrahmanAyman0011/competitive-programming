#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int x , y; cin >> x >> y;
    int a = (y + 1) / 2;
    int b = (y*4+x+14)/15;

    cout  << max(a ,b) << endl;
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
