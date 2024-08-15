#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

const int N = 1e3 + 6; 
int n, m, ans = 0, color[N]; 
bool vis[N][N]; 
vector<int> adj[N];
char s[N][N];

const int dx[] = {0 ,0 ,1 , -1};
const int dy[] = {1 ,-1 ,0 ,0}; 

bool valid(int x , int y){
    return x < n and x >= 0 and y < m and y>= 0 and !vis[x][y] and s[x][y]!= '#';
}
void dfs(int x , int y) {
    vis[x][y] = 1;
    for(int i = 0 ; i< 4 ;i ++){
        int nx = x + dx[i]; 
        int ny = y + dy[i];
        if(valid(nx,ny))
            dfs(nx,ny);
    }
}

void solve() {
    cin >> n >> m;
    int ans = 0;

    for(int i = 0 ; i < n; i++)
        for(int o = 0 ; o < m; o++)
        cin >> s[i][o];
    for(int i = 0 ; i < n; i++)
        for(int o = 0 ; o < m; o++)
            if(valid(i ,o))
                ans++,dfs(i , o);
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
