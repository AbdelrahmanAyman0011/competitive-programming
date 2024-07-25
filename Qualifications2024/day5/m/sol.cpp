#include <iostream>
#include <string>
using namespace std;

void processTestCase() {
    int n, q;
    cin >> n;
    
    string s;
    cin >> s;
    
    int offset = 0;
    
    cin >> q;
    
    while (q--) {
        int type, x;
        cin >> type >> x;
        
        if (type == 1) {
            // Mutation of power x
            offset = (offset - x + n) % n;
        } else if (type == 2) {
            // Query for i-th character
            int i = x - 1; // Convert 1-based index to 0-based
            int actualIndex = (i - offset + n) % n;
            cout << s[actualIndex] << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        processTestCase();
    }
    
    return 0;
}
