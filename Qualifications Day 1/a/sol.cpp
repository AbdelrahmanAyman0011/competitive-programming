#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);

int rv(int n) {
    int r = 0;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        r = r * 10 + digit;
    }
    return r;
}

void solve() {
    int n;
    cin >> n;
    while(n--) {
        string x;
        cin >> x;
        string rev = x;
        reverse(all(rev));
        if(x >= rev)
            yes
        else
            no
    }
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