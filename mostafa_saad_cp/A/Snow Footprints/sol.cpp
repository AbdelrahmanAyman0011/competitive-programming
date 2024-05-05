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
    int size, r = 0, l = 0, ridx = -1, resr = -1, lidx = -1, resl = -1;
    cin >> size;
    string s;
    cin >> s; //....RRLL...
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'R')
        {
            r++;
            if (ridx == -1)
                ridx = i + 1;
            resr = i + 1;
        }
        if (s[i] == 'L')
        {
            l++;
            if (lidx == -1)
                lidx = i + 1;
            resl = i + 1;
        }
    }
    if (r > 0 && l > 0)
        cout << ridx << " " << resr;
    else if (r > 0)
        cout << ridx << " " << resr + 1;
    else
        cout << resl << " " << lidx - 1;
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
