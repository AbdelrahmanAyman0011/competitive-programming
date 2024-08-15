#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

class Solution {
public:
    int s;
    int visited[100]; 
    void solve(int idx , int cursum,int k){

    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(auto c : nums)
            sum+=c;
        s = sum; 
        solve(0,0,k);
    }
};

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    bool result = sol.canPartitionKSubsets(nums, k);
    
    if (result) {
        yes
    } else {
        no
    }
}

int main() {
    Bedo
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
