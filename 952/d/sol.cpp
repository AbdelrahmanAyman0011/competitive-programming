#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
		int n, m; cin >> n >> m;
		vector<vector<char>> g(n, vector<char>(m));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> g[i][j];
			}
		}
        pair<int, int> t = {1e9, 1e9}, b = {-1e9, -1e9};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(g[i][j] == '#'){
					t = min(t, {i, j});
					b = max(b, {i, j});
				}
			}
		}
		assert(t.second == b.second);
		cout << (t.first + b.first) / 2 + 1 << " " << t.second + 1 << endl;
	
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
