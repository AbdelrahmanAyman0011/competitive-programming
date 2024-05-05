#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n , m ; cin >> n >> m; 
    char p;
    bool flag = false;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < m; j++){
            cin >> p;
            if(p == 'C' or p == 'M' or p == 'Y') {
                flag = true; 
                break;
            }
        }
    }
    if(flag)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
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
