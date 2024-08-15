#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define MOD 1000000007
using namespace std;

void fio() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
}

int main() {
    fio();
    int T = 1;
    // cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        int q;
        cin >> q;

        int max_elem = *max_element(all(A));

        vector<vector<int>> prefix_freq(max_elem + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= max_elem; ++j) {
                prefix_freq[j][i + 1] = prefix_freq[j][i];
            }
            prefix_freq[A[i]][i + 1]++;
        }

        while (q--) {
            int l, r, x, z;
            cin >> l >> r >> x >> z;

            unordered_map<int, int> count_freq;
            for (int i = 1; i <= max_elem; ++i) {
                int freq = prefix_freq[i][r] - prefix_freq[i][l - 1];
                if (freq > 0) {
                    count_freq[freq]++;
                }
            }

            bool found = true;
            for (int k = x; k <= z; ++k) {
                if (count_freq[k] <= 0) {
                    found = false;
                    break;
                }
            }
            if (found)
                yes
            else
                no
        }
    }
    return 0;
}
