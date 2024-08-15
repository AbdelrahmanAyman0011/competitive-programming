#include <iostream>
#include <vector>
#include <complex>
using namespace std;

typedef long long ll;
typedef complex<double> point;

double EPS = 1e-8;

void solve() {
    int r = 0;
    vector<vector<double>> v(50);
    char ch;
    
    while (true) {
        cin >> ch;
        if (ch == '*') {
            break;
        }
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        v[r].push_back(x1);
        v[r].push_back(y1);
        v[r].push_back(x2);
        v[r].push_back(y2);
        r++;
    }
    
    double x, y, w = 1;
    
    while (cin >> x >> y) {
        int q = 1;
        if (x == 9999.9 && y == 9999.9)
            break;
        for (int i = 0; i < r; i++) {
            if (x > v[i][0] && x < v[i][2] && y > v[i][3] && y < v[i][1]) {
                cout << "Point " << w << " is contained in figure " << i + 1 << "\n";
                q = 0;
            }
        }
        if (q)
            cout << "Point " << w << " is not contained in any figure\n";
        w++;
    }
}

int main() {
    solve();
    return 0;
}
