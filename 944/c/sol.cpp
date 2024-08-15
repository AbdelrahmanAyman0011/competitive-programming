#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int a , b , c, d;
    cin >> a >> b >> c>> d;
    int cnt = 0;
    for(int i = a ;i != b;i =(i == 12)?  1: i + 1){
        if(i == d or i == c)
            cnt++;
    }
    if(cnt == 1)
        yes
    else
        no
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
