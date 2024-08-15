#include <bits/stdc++.h>
using namespace std;

#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

void solve() {
    int R, C, D; // Requirements per machine
    int NR, NC, ND; // Cluster capacities
    int PR, PC, PD; // Prices per unit
    long long N; // Budget

    // Read the requirements
    cin >> R >> C >> D;

    // Read the capacities
    cin >> NR >> NC >> ND;

    // Read the prices
    cin >> PR >> PC >> PD;

    // Read the budget
    cin >> N;

    // Binary search to find the maximum number of machines
    long long low = 0, high = 1e9, answer = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;

        long long requiredRAM = max(0LL, R * mid - NR);
        long long requiredCPU = max(0LL, C * mid - NC);
        long long requiredDisk = max(0LL, D * mid - ND);

        long long cost = requiredRAM * PR + requiredCPU * PC + requiredDisk * PD;

        if (cost <= N) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Output the result
    cout << answer << endl;
}

int main() {
    Bedo
    
    // // Open input and output file streams
    // ifstream infile("input.txt");
    // ofstream outfile("output.txt");

    // // Redirect cin and cout to the files
    // if(infile.is_open() && outfile.is_open()){
    //     cin.rdbuf(infile.rdbuf());
    //     cout.rdbuf(outfile.rdbuf());
    // } else {
    //     cerr << "Error opening files" << endl;
    //     return 1;
    // }

    int T;
    cin >> T; // Read number of test cases

    while(T--) {
        solve();
    }

    // // Close file streams
    // infile.close();
    // outfile.close();

    return 0;
}
