#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n , m ,k; cin >> n >> m >> k;
           int a[n+4][m+4];
        for(int i=0;i<=n+3;i++){
            for(int j=0;j<=m+3;j++){
                a[i][j]=0;
            }
        }
        int p , q;
        int y=0;
        for(int i=1;i<=k;i++){
            cin>>p>>q;
            a[p][q]=1;
            if(a[p-1][q-1]+a[p-1][q]+a[p][q-1]+a[p][q]==4){
                cout<<i;
                return;
            }
            if(a[p-1][q]+a[p-1][q+1]+a[p][q]+a[p][q+1]==4){
                cout<<i;
                return;
            }
            if(a[p][q-1]+a[p][q]+a[p+1][q-1]+a[p+1][q]==4){
                cout<<i;
                return;
            }
            if(a[p][q]+a[p][q+1]+a[p+1][q]+a[p+1][q+1]==4){
                cout<<i;
                return;
            }
        } 
        cout<<y;
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
