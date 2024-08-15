#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    int n; 
    cin >> n; 
    vector<vector<char>> v(n, vector<char>(n));
    
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j++){
            cin >> v[i][j];
        }
    }
    
    bool isX = true;
    char d1 = v[0][0];
    char d2 = v[0][n - 1];
    
    for(int i = 0 ; i < n ; i ++ ){
        if(v[i][i] != d1) {
            isX = false;
            break;
        }
    }
    
    for(int i = 0 ; i < n ; i ++ ){
        if(v[i][n - 1 - i] != d2) {
            isX = false;
            break;
        }
    }
    
    char notd = v[0][1];
    if(notd == d1 || notd == d2) {
        isX = false;
    }
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i != j && i != n - 1 - j) && v[i][j] != notd) {
                isX = false;
                break;
            }
        }
        if (!isX) {
            break;
        }
    }
    
    if(isX) {
        yes
    } else {
        no
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
