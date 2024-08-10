#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int a , b ,c; cin >> a >> b >> c;
    if(c == 0)
        cout <<fixed << setprecision(10) << a *1.0/ 2 << " " << b * 1.0 / 2 << endl;
    else
        cout << "-1\n";
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