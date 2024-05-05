#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    string s; cin >>s;
    string res= "";
    bool flag =  false;
    bool write = false;
    for(int i = 0; i < s.size() ; i++){
        if(s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] =='B')
        {    
            i+=2;
            if(write)
                flag = true;
        }
        else{
        if(flag)
            res += " ";
        res +=s[i];
        write = true;
        flag = false;

        }
        
    }
    cout << res ;
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
