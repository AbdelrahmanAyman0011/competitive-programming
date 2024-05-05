
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

char grid[100][101];
bool visited[100][100];

void solve(){
    int n; cin >> n;
    int a ,b ; cin >> a >> b;
    ll cnt = 0;
    if (a * 2 > b)
        cnt = (n % 2) * a + (n / 2) * b;
    else
        cnt = n * a ;
    cout << cnt << endl;


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