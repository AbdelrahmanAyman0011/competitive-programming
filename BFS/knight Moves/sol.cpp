#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);
int dist[8][8];
int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

void bfs(int x, int y) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            dist[i][j] = 1e9;
        }
    }
    dist[x][y] = 0;
    queue<pair<int, int>> q;
    q.emplace(x, y);
    while (!q.empty()) {
        int r = q.front().first, c = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nr = r + dx[i], nc = c + dy[i];
            if (nr < 0 || nr > 7 || nc < 0 || nc > 7)
                continue;
            if (dist[r][c] + 1 < dist[nr][nc]) {
                dist[nr][nc] = dist[r][c] + 1;
                q.emplace(nr, nc);
            }
        }
    }
}

void solve() {
    string a, b;
    while (cin >> a >> b) {
        int col = a[0] - 'a', row = a[1] - '1';
        int col2 = b[0] - 'a', row2 = b[1] - '1';
        bfs(row, col);
        cout << "To get from " << a << " to " << b << " takes " << dist[row2][col2] << " knight moves." << endl;
    }
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
