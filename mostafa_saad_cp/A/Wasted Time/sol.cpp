#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n, k; cin >> n >> k;
    int x1 ,x2;
    vector<vector<double>> v(n);
    double sum ;
    for(int i = 0 ; i < n ; i++){
        cin >> x1 >> x2;
        v[i].push_back(x1);
        v[i].push_back(x2);
        if(i != 0)
            sum +=sqrt(pow(x1 - v[i - 1][0],2) +pow(x2 - v[i - 1][1],2));
    }
    cout << fixed << setprecision(9) <<(sum/50)*k << endl;
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
