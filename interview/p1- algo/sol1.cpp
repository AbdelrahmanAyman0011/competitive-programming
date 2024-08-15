#include <bits/stdc++.h>
using namespace std;

#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);

void solve() {
    int R, C, D; // Requirements per machine
    int NR, NC, ND; // Cluster capacities

    // Read the requirements
    cin >> R >> C >> D;

    // Read the capacities
    cin >> NR >> NC >> ND;

    // Calculate the maximum number of machines that can be run
    int maxMachinesByRAM = NR / R;
    int maxMachinesByCPU = NC / C;
    int maxMachinesByDisk = ND / D;

    // The maximum number of machines is the minimum of the three values
    int maxMachines = min({maxMachinesByRAM, maxMachinesByCPU, maxMachinesByDisk});

    // Output the result
    cout << maxMachines << endl;
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
