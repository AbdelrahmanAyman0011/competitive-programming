#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n, c, d;
    cin >> n >> c >> d;
    vector<ll> a(n*n);
    for(int i = 0; i < n * n ; i ++)
        cin >> a[i];
    sort(all(a));
    vector<ll> b(n*n);
    b[0] = a[0];
    for(int i = 1 ; i <n ; i++){
        b[i] = b[i - 1] + c;
    }
    for(int i =  1; i< n ;i++){
        for(int j = 0; j < n; j++){
            b[i * n + j] = b[(i - 1) * n + j] + d;

        }
    }
    sort(all(b));
    cout << (a == b ? "YES" : "NO" ) << endl;
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
