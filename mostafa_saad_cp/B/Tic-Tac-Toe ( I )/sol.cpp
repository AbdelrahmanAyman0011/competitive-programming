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

bool iswin(string config)
{

    bool rows =
        (config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
        (config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
        (config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

    bool columns =
        (config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
        (config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
        (config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

    bool diagonals =
        (config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
        (config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

    return rows || columns || diagonals;
}
string bfs(string board)
{
    string start = ".........";
    queue<pair<string, bool>> q;
    q.emplace(start, 1);
    string ans = "no";
    while (!q.empty())
    {
        string cur = q.front().first;
        bool curb = q.front().second;
        q.pop();
        if (cur == board)
            return "yes";
        if (iswin(cur))
            continue;
        for (int i = 0; i < 9; i++)
        {
            if (cur[i] == '.')
            {
                cur[i] = (curb ? 'X' : 'O');
                if (cur[i] == board[i])
                    q.push({cur, 1 ^ curb});
                cur[i] = '.';
            }
        }
    }
    return ans;
}
void solve()
{
    string board = "";
    for (int i = 0; i < 3; i++)
    {
        string row;
        cin >> row;
        board += row;
    }
    cout << bfs(board) << endl;
}

int main()
{
    Bedo int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}