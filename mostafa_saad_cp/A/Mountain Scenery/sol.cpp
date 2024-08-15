#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int k , n; cin >> k >> n;
    int m = k * 2 + 1; 
    vector<int> v(m);
    for(int i = 0;  i < m ; i++){
        cin>>v[i];
    }
    for(int i = 1; i < m ; i++){
        if(v[i] > v[i - 1] + 1 and v[i] > v[i + 1] + 1)
        {    
            n--;
            v[i]--;
        }
        if(!n)
            break;
    }
    for(int i = 0 ; i < v.size(); i ++)
        cout << v[i] << " ";
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
