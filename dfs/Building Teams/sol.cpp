#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);
const int N = 1e5 + 1;
bool vis[N], team[N], can;
vector<int> v[N];

void dfs(int i, int parent) {
    vis[i] = true;
    for (auto c : v[i]) {
        if (c != parent) {
            if (!vis[c]) {
                team[c] = !team[i];
                dfs(c, i);
            } else {
                if (team[c] == team[i]) {
                    can = false;
                }
            }
        }
    }
}

void solve() {
    int n, m; 
    cin >> n >> m;

    // Reset for each test case
    fill(vis, vis + n + 1, false);
    fill(team, team + n + 1, false);
    can = true;

    for (int i = 1; i <= n; ++i) v[i].clear();

    while (m--) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i, -1);
        }
    }

    if (!can) {
        cout << "IMPOSSIBLE\n";
    } else {
        for (int i = 1; i <= n; i++) {
            cout << (team[i] ? 2 : 1) << (i == n ? '\n' : ' ');
        }
    }
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
