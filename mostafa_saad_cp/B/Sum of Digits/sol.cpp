#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    string n ; cin >> n;
    if(n.size() == 1)
    {
        cout << 0 << endl; 
        return;
    }
    int cnt = 0;
    while(n.size() > 1){
        int sum = 0;
        for(auto c : n)
            sum += c - '0';
        
        n = to_string(sum);
        cnt++;
    }
    cout << cnt << endl;
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
