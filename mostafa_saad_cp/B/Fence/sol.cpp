#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1];
    }
    
    int minsum = v[k - 1];
    int idx = 0;
    for (int i = k; i < n; i++) {
        int cur = v[i] - v[i - k];
        if (cur < minsum) {
            minsum = cur;
            idx = i - k + 1;
        }
    }
    cout << idx + 1 << endl;
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}
