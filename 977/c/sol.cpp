#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    unordered_set<int> st;
    vector<int> ub;

    for (int i = 0; i < m; ++i)
    {
        if (st.find(b[i]) == st.end())
        {
            st.insert(b[i]);
            ub.push_back(b[i]);
        }
    }

    bool isValid = true;
    int limit = min(n, static_cast<int>(ub.size()));

    for (int i = 0; i < limit; ++i)
    {
        if (a[i] != ub[i])
        {
            cout << "TIDAK" << endl;
            isValid = false;
            break;
        }
    }

    if (isValid)
    {
        cout << "YA" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
