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

set<pair<int, int>> sp;
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

void bfs(pair<int, int> s, int x2, int y2) {
    map<pair<int, int>, int> len;
    queue<pair<int, int>> q;
    q.push(s);
    len[s] = 0;

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            pair<int, int> newp = {nx, ny};

            if (sp.count(newp) == 0 || len.count(newp) != 0)
                continue;

            q.push(newp);
            len[newp] = len[cur] + 1;

            if (newp.first == x2 && newp.second == y2) {
                cout << len[newp];
                return;
            }
        }
    }
    cout << -1;
}

void solve() {
    int x1, y1, x2, y2, n;
    cin >> x1 >> y1 >> x2 >> y2 >> n;

    for (int i = 0; i < n; i++) {
        int r, a, b;
        cin >> r >> a >> b;
        for (int j = a; j <= b; j++) {
            sp.insert({r, j});
        }
    }

    pair<int, int> s = {x1, y1};
    bfs(s, x2, y2);
}

int main() {
    Bedo;
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
