#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    string s; cin >> s;
    string res; 
    bool flag = true;
    if(s.size() == 0){
        cout << "/";
        return;
        }
    for(int i = 0 ; i < s.size(); i ++){
        if(s[i] == '/' && flag== true){
            res+= '/';
            flag = false;
        }else if(s[i] != '/'){
            flag = true;
            res+=s[i];
        } 
    }
    if(res[res.size() - 1] == '/' && res.size() != 1)
        res.pop_back();
    cout << res;

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
