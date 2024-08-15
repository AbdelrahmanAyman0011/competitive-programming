#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);
const int N = 2e5 + 10;
vector<int> adj[N] ; int dist[N];
int n;

//bfs solution
void bfs(int src){
    for(int i = 1; i <= n ; i++){
        dist[i] = 1e9;
    }
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node  = q.front();
        q.pop();
        for(auto ch : adj[node]){
            if(dist[node] + 1 < dist[ch]){
                dist[ch] = dist[node] + 1;
                q.push(ch);
            }
        }
    }
}
// dfs solution 
void dfs(int node ,int distance){
    dist[node] = distance;

    for(auto c : adj[node]){
        if(dist[node] + 1 < dist[c])
            dfs(c ,dist[node] + 1);
    }
}

void solve() {
    int  n , m; cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1 ;i <= n ; i++){
        dist[i] = 1e9;
    }
    bfs(1);
    for(int i = 1 ; i <= n ; i++){
        cout << "Node " << i << " dis = "<< dist[i] << endl;
    // dfs(1 , 0);
    // for(int i = 1 ; i <= n ; i++){
    //     cout << "Node " << i << " dis = "<< dist[i] << endl;
    }
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