#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);
class Solution {
public:
    string t;
    int n;
    vector<string> cur;
    bool checkPalind(string s){
        int l = 0 , r = s.size() - 1;
        while(l < r){
            if(s[l++] !=s[r--])
                return false;
        }
        return true;
    }

    void solve(int st ,   vector<vector<string>> &ret){
        if(st == n){
            ret.push_back(cur);
            return;
        }
            
        for(int pi = st;pi < n; pi++){
            
            string left = t.substr(st,pi - st + 1);
            if(checkPalind(left)){
                cur.push_back(left); // do (push) 
                solve(pi + 1 , ret);// rec
                cur.pop_back();//--------- undo (pop)
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        t = s;
        n = s.size();
        solve(0 , ans); // try every partitioning starting form idx i till end  of the array
        return ans;
    }
};
void solve() {
    string s;
    cin >> s;    
    Solution sol;
    auto subs = sol.partition(s);
    for(auto c : subs){
        cout <<"[";
        for(int i = 0 ; i < c.size() ; i++){
            cout << c[i] << "-" ;

        }
        cout <<"]"<< endl;
    }
    
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}