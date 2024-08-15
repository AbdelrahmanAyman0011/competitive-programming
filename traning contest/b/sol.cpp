#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
     string s;
        cin >> s;
        int lower = 0, upper = 0;
        for (char c : s) {
            if (islower(c))
                lower++;
            else
                upper++;
        }
        if (lower >= upper) {
            for (char& c : s)
                c = tolower(c);
        }
        else {
            for (char& c : s)
                c = toupper(c);
        }
        cout<<s;
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
