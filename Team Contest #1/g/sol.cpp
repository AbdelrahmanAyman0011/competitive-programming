#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

void solve(){
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for(int i = 1; i <= n ; i++){
        cin >> v[i];
    }    
    sort(all(v));
    bool flag = true;

    for(int i = n ; i >= 1; i--){
        if(v[i] - v[i - 1])
        {
            if(!flag)
                flag = true;
            else if(v[i] - v[i - 1] == 1)
                flag = false;
        }
    }
    if(flag)
        cout << "Alicius" << endl;
    else
        cout << "Bobius" << endl;
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
