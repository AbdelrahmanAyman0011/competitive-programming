#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

vector<string> results;

void solve(const string& time)
{
    int hh = stoi(time.substr(0, 2));
    int mm = stoi(time.substr(3, 2));
    int h = mm / 5;
    int m = (hh % 12) * 5;
    if (h == 0)
        h = 12;

    stringstream ss;
    ss << setw(2) << setfill('0') << h << ":"
       << setw(2) << setfill('0') << m;
    results.push_back(ss.str());
}

int main()
{
    Bedo;
    int tt;
    cin >> tt;
    vector<string> times(tt);
    
    // Reading all the times
    for (int i = 0; i < tt; ++i) {
        cin >> times[i];
    }
    
    // Solving each case
    for (int i = 0; i < tt; ++i) {
        solve(times[i]);
    }

    // Output results
    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
