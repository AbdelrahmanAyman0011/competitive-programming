#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);
void solve(){
    int n, m; char c;
    cin >> n >> m >> c;
    vector<vector<char>> v(n, vector<char>(m));

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> v[i][j];
        }
    }

    unordered_set <char> col;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(v[i][j] == c){
                if(i-1 >= 0 && v[i-1][j] != '.' && v[i-1][j] != c){
                    col.insert(v[i-1][j]);
                }
                if(i+1 < n && v[i+1][j] != '.' && v[i+1][j] != c){
                    col.insert(v[i+1][j]);
                }
                if(j-1 >= 0 && v[i][j-1] != '.' && v[i][j-1] != c){
                    col.insert(v[i][j-1]);
                }
                if(j+1 < m && v[i][j+1] != '.' && v[i][j+1] != c){
                    col.insert(v[i][j+1]);
                }
            }
        }
    }

    cout << col.size() << endl;
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
