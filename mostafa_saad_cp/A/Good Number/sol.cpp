#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<string> vec;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        vec.push_back(s);
    }
    int cnt = 0;

    for(int i =0 ;i < n ;i ++){
        int cc = 0;
        for(int j = 0 ; j <= k ; j++){
            if(vec[i].find(to_string(j)) != -1)
                cc++;
        }
        if(cc == k + 1)
            cnt++;
    }
    cout << cnt << endl;
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
