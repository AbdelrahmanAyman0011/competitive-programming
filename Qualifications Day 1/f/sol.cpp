    #include <bits/stdc++.h>
    #define all(v) v.begin(), v.end()
    #define ll long long
    #define yes cout << "YES" << endl;
    #define no cout << "NO" << endl;
    #define MOD 1000000007
    using namespace std;

    void fio() {
        cin.tie(nullptr);
        cout.tie(nullptr);
        ios::sync_with_stdio(false);
    }
    string s , t;
    int count(string s , string t) {
        int cnt = 0;
        size_t pos = s.find(t);
        while (pos != string::npos) {
            s.erase(pos, t.length());
            cnt++;
            pos = s.find(t , pos);
        }
        return cnt;
    }int main() {
        fio();
        int T;
        cin >> T;
        while (T--) {
            cin >> s >> t;
            cout << count(s , t) << "\n";
        }
        return 0;
    }