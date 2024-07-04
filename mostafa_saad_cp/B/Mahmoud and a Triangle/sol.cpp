#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    sort(all(v));
    for(int i = 0 ; i < n - 2; i++){
        if(v[i] + v[i + 1] > v[i + 2]){
            yes;
            return;
        }
    }
    no;
}

int main() {
    Bedo;
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
