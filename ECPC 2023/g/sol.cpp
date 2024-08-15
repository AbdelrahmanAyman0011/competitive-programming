#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"Yes" << endl;
#define no cout <<"No" << endl;
const long double PI = acos(-1.0);

void solve() {
    int  n , k ; cin >> n >> k;
    if(k == 1 or n == 1 )
        yes
    else if (k == 2)
        {
            if(n %2)
                yes
            else
                no
        }
    else
        no
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