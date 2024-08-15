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

int number_of_prime_factors(int number)
{
    int count = 0;
    for (int i = 2; i * i <= number; i++)
    {
        while (number % i == 0)
        {
            count++;
            number /= i;
        }
    }
    if (number > 1)
    {
        count++;
    }
    return count;
}

void solve()
{
    int l, r, x;
    cin >> l >> r >> x;
    unordered_map<int, int> freq;
    for (int i = l; i <= r; ++i)
    {
        freq[i] = number_of_prime_factors(i);
    }

    int counter = 0;
    for (int i = l; i <= r; i++)
    {
        if (freq[i] == x)
            counter++;
    }
    cout << counter << endl;
}

int main()
{
    Bedo int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
