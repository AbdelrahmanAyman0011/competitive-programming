#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve() {
    string a, b, s = "";
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int w = a.size() - 1, q = b.size() - 1;
    ll len = max(a.size(), b.size());
    int cnt, rest = 0;
    for (int i = 0; i < len + 1; i++) {
        cnt = 0;
        if (i < a.size() && w > -1)
            cnt += (a[w] - '0');
        if (i < b.size() && q > -1)
            cnt += (b[q] - '0');
        cnt += rest;
        rest = 0;

        if (cnt > 9) {
            s += ((cnt % 10) + '0');
            rest = cnt / 10;
        } else {
            s += (cnt + '0');
        }
        w--;
        q--;
    }

    reverse(s.begin(), s.end());

    size_t startpos = s.find_first_not_of("0");
    if (string::npos != startpos) {
        s = s.substr(startpos);
    }
    bool emp = false;
    if (s.empty()) {
        s = "0";
        emp = true;
    }

    reverse(s.begin(), s.end());
    if(s[0] == '0' and !emp){
    for(auto c : s){
        if(c != '0')
            cout << c;
    }
    cout << endl;
    }
    else
        cout << s << endl;
}

int main() {
    Bedo
    int tt = 1;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
