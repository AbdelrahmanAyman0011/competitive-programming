#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

int Students, Successful_Students, Wishes, Position, a;
vector<vector<int>> Adj;
bool Visited[100074];
vector<int> Initial_Result;
int Parent[100074];

void Topological_Sort(int Student) {
    Visited[Student] = true;
    for (int i = 0; i < (int)Adj[Student].size(); i++) {
        int child = Adj[Student][i];
        if (!Visited[child])
            Topological_Sort(child);
    }
    Initial_Result.push_back(Student);
}

void solve() {
    cin >> Students >> Successful_Students;
    Adj.resize(Students + 1);

    for (int i = 1; i <= Successful_Students; i++) {
        cin >> Wishes;
        for (int j = 0; j < Wishes; j++) {
            cin >> a;
            Adj[i].push_back(a);
        }
    }

    for (int i = 1; i <= Students; i++) {
        if (!Visited[i])
            Topological_Sort(i);
    }

    Position = 0;
    for (int i = Students - 1; i >= 0; i--) {
        int Student = Initial_Result[i];
        Parent[Student] = Position;
        Position = Student;
    }

    for (int i = 1; i <= Students; i++) {
        cout << Parent[i] << endl;
    }
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
