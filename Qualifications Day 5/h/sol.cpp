#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);
bool dfs(const vector<vector<char>>& v, int i, int j, int n) {
    return (i > 0 && i < n-1 && j > 0 && j < n-1 &&
            v[i][j] == '*' &&
            v[i-1][j] == '*' &&
            v[i+1][j] == '*' &&
            v[i][j-1] == '*' &&
            v[i][j+1] == '*');
}
int sol(const vector<vector<char>>& v, int n) {
    int cnt = 0;

    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            if (dfs(v, i, j, n)) {
                cnt++;
            }
        }
    }

    return cnt;
}

void solve() {
    int n; cin >> n;
    vector<vector<char>> v(n ,vector<char> (n));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> v[i][j];
        }
    }
    cout << sol(v , n) << endl;
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}