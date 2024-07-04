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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    vector<int> cnt( n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cnt[u]++;
        cnt[v]++;
    }
    int res = 0 ;
    stack<int> st;

    while(true){
        for(int i = 1; i <= n; i++){
            if(cnt[i] == 1)
                st.push(i);
        }
        if(st.empty())
            break;
        res++;
        while(!st.empty()){
            int t =st.top();
            st.pop();
            cnt[t]--;
            for(auto c : adj[t])
                cnt[c]--;
        }
    }
    cout << res;
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