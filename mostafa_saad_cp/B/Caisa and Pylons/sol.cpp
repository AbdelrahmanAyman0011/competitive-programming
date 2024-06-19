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
    vector <int> v(n);
    for(int i = 0; i < n ; i++)
        cin >> v[i];
    
    int eng = 0 , d = v[0];
    for(int i = 1 ; i < n ; i++){
        if(v[i] < v[i - 1])
            eng += v[i - 1] - v[i];
        else
        {// prev < next
            if(v[i] - v[i - 1] <= eng)
                eng -= v[i] - v[i - 1];
            else
            {
                //  3  6  7  d =3  eng = 2  dif = 3    d += 3-2
                d +=(v[i] - v[i - 1]) - eng;
                eng = 0;
            }
        }
    }
    cout << d << endl;
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
