#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

const int N = 1e5 + 6; 
int n, m, ans = 0, color[N]; 
bool vis[N]; 
vector<int> adj[N];

void dfs(int node) {
    vis[node] = true;
    if (color[node] >= 5)
        ans++;
    for (auto it : adj[node]) {
        if (!vis[it])
            dfs(it);
    }
}

void solve() {
    cin >> n >> m;
    fill(vis, vis + n + 1, false);
    for (int i = 1; i <= n; i++) {
        adj[i].clear();
    }

    for (int i = 1; i <= n; i++) {
        cin >> color[i];
    }
    
    while (m--) {
        int a, b; 
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    dfs(1);
    cout << ans << endl;
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
