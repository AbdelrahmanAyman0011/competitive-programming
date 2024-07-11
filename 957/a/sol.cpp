#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    vector<int>v(3);
    cin >> v[0] >> v[1] >> v[2];
    for(int i = 0 ; i < 5; i++)
    {
        sort(all(v));
        v[0]++;
    }
    ll sum = 1;
    for(int i = 0 ; i < 3; i++)
    {
        sum *=v[i];
    }
    cout << sum << endl;
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