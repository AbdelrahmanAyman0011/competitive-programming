#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll n , t; cin >> n >> t;
    ll cnt = 1;
    
    if (n == 1 && t == 10)
        cout << -1 << endl;
    else
        cout << t ;
    if(t == 10)
        {
            for (int i = 0; i < n - 2; i++)
            {
                cout << 0 ;
            }
        }
    else{
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
        }
        cout << endl; 
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
