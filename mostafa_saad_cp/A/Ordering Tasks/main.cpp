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
bool vis[150];
vector<vector<int>> adj(150);
vector<int> ans;

void top_sort(int x)
{
	vis[x] = true;

	for (int i = 0; i < (int)adj[x].size(); ++i)
	{
		int child = adj[x][i];
		if (!vis[child])
			top_sort(child);
	}

	ans.insert(ans.begin(), x + 1);
}
void solve()
{
	int n, m, x, y;
	while (cin >> n >> m && n != 0)
	{
		adj.clear();
		ans.clear();
		memset(vis, false, sizeof vis);

		for (int i = 0; i < m; ++i)
		{
			cin >> x >> y;
			adj[x - 1].push_back(y - 1);
		}

		for (int i = 0; i < n; ++i)
			if (!vis[i])
				top_sort(i);

		for (int i = 0; i < (int)ans.size(); i++)
			cout << ans[i] << " \n"[i == (int)ans.size() - 1];
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
