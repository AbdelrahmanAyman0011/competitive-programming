#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n;
    cin >> n;
    int p; cin >> p;
    set<int> st;
    for (int i = 0; i < p; i++)
    {   
        int a; cin >> a;
        st.insert(a);
    }
    int y; cin >> y;
    for(int i = 0; i < y; i++){
        int a; cin >> a;
        st.insert(a);
    }
    cout << ((st.size() == n) ? "I become the guy." : "Oh, my keyboard!") << "\n";
    
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
