#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "yes" << endl;
#define no cout << "no" << endl;
const long double PI = acos(-1.0);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int l = 0 ,r = n - 1;
    while(l < n - 1 and v[l] <= v[l + 1])
        l++;
    
    if(l == n - 1)
    {
        yes
        cout << 1 << " " << 1 << endl;
        return;
    }

    while(r > 0 and v[r] >= v[r - 1])
        r--;
    
    reverse(v.begin() + l, v.begin() + r + 1);

    if(is_sorted(all(v))){
        yes
        cout << l + 1 << " " << r + 1 << endl;
    }
    else
        no
}
//  3 2 1
//  1 2 3
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
