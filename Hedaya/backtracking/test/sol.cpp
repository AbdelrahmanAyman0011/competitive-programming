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




// int n, m;
// vector<string> grid(100);
// string path;
// uva 10344
// int a,b,c,d,e, val[10000];

// bool uva23(int idx, int value)
// {
//     if (idx == 5)
//     {
//         if (value == 23)
//         {
//             return 1;
//         }
//     }

//     return uva23(idx + 1, value + val[idx]) or uva23(idx + 1, value - val[idx]) or uva23(idx + 1, value * val[idx]);
// }

// void bt(int r, int c)
// {
//     if (r == n - 1 && c == m - 1)
//     {
//         cout << path << endl;
//         return;
//     }

//     // Move right
//     if (c + 1 < m && grid[r][c + 1] != '#')
//     {
//         path.push_back('R');
//         bt(r, c + 1);
//         path.pop_back(); // Backtrack
//     }

//     // Move down
//     if (r + 1 < n && grid[r + 1][c] != '#')
//     {
//         path.push_back('D');
//         bt(r + 1, c);
//         path.pop_back(); // Backtrack
//     }
// }

void solve()
{
    // backtracking -->
    // while(cin >> val[0] >> val[1] >> val[2] >> val[3] >> val[4]){
        
    //     if(uva23(1z , val[0]))
    //         cout << "Possible\n";
    //     else
    //         cout << "Impossible\n";

    // }
        
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