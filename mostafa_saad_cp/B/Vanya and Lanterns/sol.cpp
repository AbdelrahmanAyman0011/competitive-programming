#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int n , l;
    cin >> n >> l;
    vector<int> v(n);
    for(int i =0 ; i < n ;i++)
        cin >> v[i];

    sort(all(v));

    int res = 2 * max(v[0] , l - v[n - 1]);
    for(int i = 1; i < n ; i ++)
        res = max(res , (v[i] - v[i - 1]));
    cout << fixed << setprecision(9) <<(double) res/2 << endl;   
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
