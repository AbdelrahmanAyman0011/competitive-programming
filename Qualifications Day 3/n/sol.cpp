#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;
const int MAX_VAL = 10000000;  // Maximum value of Ai in the array v

vector<bool> is_prime(MAX_VAL + 1, true);
vector<int> prime_count(MAX_VAL + 1, 0);

void sieve_of_eratosthenes() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= MAX_VAL; ++p) {
        if (is_prime[p]) {
            for (int multiple = p * p; multiple <= MAX_VAL; multiple += p) {
                is_prime[multiple] = false;
            }
        }
    }
}

int main() {
    sieve_of_eratosthenes();
    
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    // Counting valid segments
    int total_ways = 0;
    for (int i = 0; i <= n - m; ++i) {
        int prime_count_in_segment = 0;
        for (int j = i; j < i + m; ++j) {
            if (is_prime[v[j]]) {
                prime_count_in_segment++;
            }
        }
        if (prime_count_in_segment == m) {
            total_ways++;
            total_ways %= MOD;
        }
    }
    
    cout << total_ways << endl;
    
    return 0;
}
