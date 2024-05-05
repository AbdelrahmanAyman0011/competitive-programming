#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n ; cin >> n;
    map<string , int> mp;
    ll max_val = 0;
    while(n --){
        string s; 
        cin >> s;
        mp[s]++;
        
    }
    string key ;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        if (it->second > max_val) {
            max_val = it->second;
            key = it->first;
        }
    }
    cout << key << endl;

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
