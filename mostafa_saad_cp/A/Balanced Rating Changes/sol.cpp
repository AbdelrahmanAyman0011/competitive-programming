#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo     \
    cin.tie(0);  \
    cout.tie(0); \
    ios::sync_with_stdio(false);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
const long double PI = acos(-1.0);

void solve()
{
    int size;
    cin >> size; 
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bool b = 0;
    for (int i = 0; i < size; i++)
    { 
        double r1 = (double)arr[i] / 2;
        if (arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
        }
        else
        {
            if (b == 0)
            {
                arr[i] = ceil(r1); 
                b = 1;
            }
            else
            {
                arr[i] = floor(r1); 
                b = 0;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
      
    }
}

int main()
{
    Bedo int tt = 1;
    // cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
