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

void bfs(int src){
    for(int i = 1; i <= 1e4 ; i++){
        dist[i] = 1e9;
    }
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int node  = q.front();
        q.pop();
        int ch1 = node * 2;
        int ch2 = node - 1;

        if(ch1 <= 20005 and dist[node] + 1 < dist[ch1])
        {
            dist[ch1] = dist[node] + 1;
            q.push(ch1);
        }

        if( ch2 > 0 and dist[node] + 1 < dist[ch2])
        {
            dist[ch2] = dist[node] + 1;
            q.push(ch2);
        }
    }
}

void solve() {
    int n ,m; cin >> n >> m;
    bfs(n);
    cout << dist[m]<<endl;
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