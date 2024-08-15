#include <bits/stdc++.h>
using namespace std;

#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

int sol(string s) {
    int n = s.size();
    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0')
            cnt0++;
        else
            cnt1++;
    }
    int ms0 = 0, ms1 = 0;
    if (abs(cnt1 - cnt0) > 1)
        return -1;
    
    return min(ms0, ms1);
}

void solve() {
    int n;
    cin >> n; 
    string s;
    cin >> s; 
    cout << sol(s) << endl; 
}

int main() {
    Bedo
    int tt;
    cin >> tt; // Read the number of test cases
    while (tt--) {
        solve(); // Call solve() for each test case
    }
    return 0;
}
