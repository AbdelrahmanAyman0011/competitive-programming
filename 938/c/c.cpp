#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll n , k ;
    cin >> n >> k;
    ll arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    ll start = (k + 1) /2;
    for (int  i = 0; i < n; i++)
    {
        ll sa = min(arr[i] , start);
        start -= sa;
        arr[i] -= sa;
    }
    ll end = k / 2;

    for(int i = n - 1; i >= 0 ; i-- ){
        ll ea = min(arr[i] ,end);
        end -=ea;
        arr[i] -= ea;
    }
    ll res = 0;
    for(int i = 0 ; i < n ; i++)
        res+= !arr[i];
    cout << res << endl;
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
