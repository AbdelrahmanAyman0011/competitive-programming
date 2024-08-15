#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI =acos(-1.0);

char arr[4][4];
bool test(int i , int j){
    if(i + 1 == 4 or j + 1 == 4)
        return false;
    
    return arr[i][j] == arr[i][j + 1] and arr[i][j] == arr[i + 1][j] and arr[i][j] == arr[i + 1][j + 1];
}
bool test(){
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            if(test(i ,j))
                return true;
        }
    }
    return false;
}
void solve(){
    
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> arr[i][j];
        }
    }
    bool xx = test();

    
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            char c = arr[i][j];

            if(arr[i][j] == '.')
                arr[i][j] = '#';
            else
                arr[i][j] = '.';
            if(test())
                xx = true;
            arr[i][j] = c;
        }
    }
    if(xx)
        yes
    else
        no
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
