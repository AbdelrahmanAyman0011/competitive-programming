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
    int mx = -1;
    int a;
    for(int i = 0 ; i < n - 1 ; i ++){
        cin >> a;
        mx = max(a , mx);
    }
    int last; 
    cin >> last; 
    cout << mx + last << endl; 
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
