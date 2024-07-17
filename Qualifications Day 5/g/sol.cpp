#include <iostream>
#include <vector>
using namespace std;

const int MAX_R = 50;

// Function to compute Euler's Totient function up to MAX_R
void computeTotient(vector<int>& phi) {
    for (int i = 1; i <= MAX_R; ++i) {
        phi[i] = i;
    }
    for (int i = 2; i <= MAX_R; ++i) {
        if (phi[i] == i) { // i is a prime number
            for (int j = i; j <= MAX_R; j += i) {
                phi[j] = phi[j] * (i - 1) / i;
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> queries(n);
    int maxR = 0;
    
    // Read all queries and determine the maximum R
    for (int i = 0; i < n; ++i) {
        cin >> queries[i].first >> queries[i].second;
        maxR = max(maxR, queries[i].second);
    }
    
    // Compute Euler's Totient function up to MAX_R
    vector<int> phi(MAX_R + 1);
    computeTotient(phi);
    
    // DP array to count number of coprime arrays that sum up to each number up to MAX_R
    vector<long long> dp(MAX_R + 1, 0);
    dp[0] = 1; // There's exactly one way to have sum 0 (empty array)
    
    for (int i = 1; i <= MAX_R; ++i) {
        for (int j = i; j <= MAX_R; j += i) {
            dp[j] += dp[j - i] * phi[i];
        }
    }
    
    // Prefix sum array for dp array
    vector<long long> prefix_dp(MAX_R + 1, 0);
    for (int i = 1; i <= MAX_R; ++i) {
        prefix_dp[i] = prefix_dp[i - 1] + dp[i];
    }
    
    // Output the result for each query
    for (const auto& query : queries) {
        int L = query.first;
        int R = query.second;
        
        long long result = prefix_dp[R] - (L > 1 ? prefix_dp[L - 1] : 0);
        cout << result << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
