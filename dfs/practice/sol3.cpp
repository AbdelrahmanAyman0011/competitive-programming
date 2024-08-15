#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

const int N = 1e3 + 6;
int n, m, color[N];
bool vis[N][N];
vector<int> adj[N];
char s[N][N];
int sx, sy, ex, ey;
string ans = "", v = "";
// timelimit  then it will solve bfs(((((  labyrinth )))))
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
string dir = "RLDU" ;
bool valid(int x, int y)
{
    return x < n and x >= 0 and y < m and y >= 0 and !vis[x][y] and s[x][y] != '#';
}
void dfs(int x, int y , string v)
{
    if(s[x][y] == 'B'){
        if (ans == "")
            ans = v;
        
        if(ans.size() > v.size())
            ans = v;
    }
    vis[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny))
        {
            v.push_back(dir[i]);
            dfs(nx, ny, v);
            v.pop_back();
        }
    }
    vis[x][y] = 0;
}

void solve()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < m; o++)
        {

            cin >> s[i][o];
            if (s[i][o] == 'A')
                sx = i, sy = o;
        }
    }
    dfs(sx, sy , "");
     if(ans == "")
        no
    else{
        yes
    cout << ans.size() << endl
         << ans << endl;
    }
}

int main()
{
    Bedo int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
