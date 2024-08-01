#include <bits/stdc++.h>
using namespace std;

#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

int main() {
    Bedo
    
    int n, q;
    cin >> n >> q;
    
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
    }
    
    while (q--) {
        long long qi;
        cin >> qi;
        
        int pos = upper_bound(a.begin(), a.end(), qi) - a.begin();
        
        long long total_valid_seats = qi * pos - prefix_sum[pos];
        cout << total_valid_seats * 50 << endl;
    }
    
    return 0;
}
