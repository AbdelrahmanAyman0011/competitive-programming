#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n , m , k; cin >> n >> m >> k;
    
    for(int i = n ; i > m ; i--)
        cout << i << " ";
    
    for(int i = 1 ; i <= m ; i++)
        cout << i << " ";
    cout << endl;
}

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}