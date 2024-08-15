#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n; cin >> n;
    int best = -1;
    int res = -1;
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a <= 10){
            if(best < b){
                best = b;
                res = i;
            }
        }
    }
    cout << res + 1<< endl;
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
