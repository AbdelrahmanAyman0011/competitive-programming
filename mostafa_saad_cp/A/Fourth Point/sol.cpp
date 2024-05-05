#include <iostream>
#include <iomanip>
#include <set>
#include <utility>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;

void solve() {
    double x[4], y[4];
    set<pair<double, double>> st;
    set<pair<double, double>>::iterator stit;
    
    double ax, ay, bx, by, cx, cy;
    while (cin >> x[0] >> y[0]) {
        for (int i = 1; i < 4; i++)
            cin >> x[i] >> y[i]; // read 4 points
        st.clear();
        for (int i = 0; i < 4; i++) { // find common 2 points and put the other 2 in st
            if (st.find({x[i], y[i]}) != st.end()) { // if this point already exists in st, this is the common point
                st.erase({x[i], y[i]}); // we don't want this common point in st
                cx = x[i], cy = y[i];
            } else
                st.insert({x[i], y[i]});
        }
        stit = st.begin(); // get the other 2 points from st
        ax = stit->first, ay = stit->second; // first point
        stit++;
        bx = stit->first, by = stit->second; // second point
        cout << fixed << setprecision(3) << ax + bx - cx << " " << ay + by - cy << endl; // fourth point is just (a+b-c) because c is added twice in a and b
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
