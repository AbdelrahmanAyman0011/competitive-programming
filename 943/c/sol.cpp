#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n; cin >> n;
    vector<int> v(n - 1);
    for(int i = 0 ; i < n - 1; i ++){
        cin >> v[i];
    }

    vector<int> a(n);
    a[0] = 501; 
    for (int i = 1; i < n; ++i) {
        a[i] = a[i - 1] + v[i - 1]; 
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
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