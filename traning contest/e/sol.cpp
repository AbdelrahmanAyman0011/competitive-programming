#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

#define N 1000000

void solve(){
    static char s[N];
    int c = 1;
    int n, a, b;

    while (cin.getline(s, N)) {
        cin >> n;
        cout << "Case " << c++ << ":\n";

        while (n--) {
            int works = 1;
            cin >> a >> b;

            if (a == b) {
                cout << "Yes\n";
                continue;
            }

            if (a > b) {
                for (int i = b; i <= a; ++i) {
                    if (s[i] != s[a]) {
                        works = 0;
                        cout << "No\n";
                        break;
                    }
                }
            } else {
                for (int i = a; i <= b; ++i) {
                    if (s[i] != s[a]) {
                        works = 0;
                        cout << "No\n";
                        break;
                    }
                }
            }

            if (works)
                cout << "Yes\n";
        }
        cin.ignore();
    }
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
