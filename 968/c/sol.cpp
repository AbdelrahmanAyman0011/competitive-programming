#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> v(26,0);
    for(auto c : s)
        v[(int)(c - 'a')]++;
    while(n)
        for(int i = 0 ; i < 26 ; i++)
            if(v[i])
                cout << (char)('a' + i) , n -- , v[i]--;
            
        cout << endl;         
    }

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}