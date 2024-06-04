#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    string s; cin >> s;
    string x =s;
    sort(all(x));

    if(x == s){
        cout << 1 << endl;
        return;
    }
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s.size() == 2)
        cout << 2 << endl;
    else
        cout << s.size() - 1 << endl;
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
