#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

const int N = 2e5 + 5; 
int n, m; 
bool vis[N]; 
vector<int> adj[N];

void dfs(int node) {
    vis[node] = 1;
    for(auto c : adj[node]){
        if(!vis[c])
            dfs(c);
    }
}

void solve() {
    cin >> n >> m;
    
    while (m--) {
        int a, b; 
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> ans;
    for(int i = 1; i <= n ;i++)
        if(!vis[i])
            ans.push_back(i) , dfs(i);
        cout << ans.size() - 1 << endl;
    for(int i = 1; i <ans.size() ;i++)
        cout << ans[i - 1] << ' ' << ans[i] << endl;
}

int main() {
    Bedo
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
