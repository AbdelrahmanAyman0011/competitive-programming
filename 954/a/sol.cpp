#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 
const long double PI = acos(-1.0);

void solve() {
    int arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];

    sort(arr, arr + 3);
    int med = arr[1];  
    int min_sum = abs(arr[0] - med) + abs(arr[1] - med) + abs(arr[2] - med);
    
    cout << min_sum << endl;
}

int main() {
    Bedo
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
