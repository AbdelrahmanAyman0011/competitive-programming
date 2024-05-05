#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int  n , top ; cin >> n >> top;
    int down = 7 - top;
    bool flag = true;
    int d1 ,d2;
    for(int i = 0 ; i < n ; i++){
        cin >> d1 >> d2;
        if(7 - d1 == down or 7 - d2 == down or 7 - d1 == top or 7 - d2 == top)
            flag = false;
    }
    if(flag)
        yes
    else
        no
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
