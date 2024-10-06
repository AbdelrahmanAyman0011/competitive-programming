#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    while (v.size() > 1) {
        int a = v[0];
        int b = v[1];

        v.erase(v.begin());
        v.erase(v.begin());

        v.push_back((a + b) / 2);

        sort(v.begin(), v.end());
    }
    
    cout << v[0] << endl;
}

int main() {
    Bedo
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
