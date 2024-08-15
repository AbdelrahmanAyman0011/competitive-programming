#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

int n = 3; 
vector<vector<int>> grid{{1,2,3},{4,5,6},{7,8,9}};
int ans = 0;

void rec(int i, int j, int sum){
    if(i >= n or j >= n)
        return;
    if(i == n - 1 and j == n - 1){
        ans = max(ans, sum + grid[i][j]);
        return;
    }
    
    rec(i + 1, j, sum + grid[i][j]);
    rec(i, j + 1, sum + grid[i][j]);
}

void solve(){
    //cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> grid[i][j];
    //     }
    // }
    rec(0, 0, 0);
    cout << ans << endl;
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
