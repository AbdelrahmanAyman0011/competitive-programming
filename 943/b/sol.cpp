#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n,m ; cin >> n >> m;
    string a , b; cin >> a >>b ;
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i <n && j <m)
    {
        if(a[i]==b[j]){
            i++;
            cnt++;
        }
        j++;
    }
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
