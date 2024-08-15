#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    char a = 'a';
    cout << "touch " <<" ";
    for(int i = 0 ; i < 20 ; i ++){
        a++;
        if(i%5 == 0){
            cout << a << ".txt ";
        }
        else if(i%5 == 1)
            cout << a << ".jpg ";
        else if(i%5 == 2)
            cout << a << ".png ";
        else if(i%5 == 3)
            cout << a << ".pdf ";
        else if(i%5 == 4)
            cout << a << ".docx ";
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
