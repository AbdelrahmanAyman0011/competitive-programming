#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n ; 
    cin >> n;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        char x;
        cin >> x;
        if(x == 'U')
            cnt++;
    }
    if(cnt % 2 == 1)
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
