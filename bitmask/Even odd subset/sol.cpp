#include <bits/stdc++.h>

using namespace std;
bool testing = false;
#define ok first
#define S second
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define all(v) v.begin(), v.end()
const int MOD = 998244353;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl

//===============================================
//                                              //
//          BBBB.                               //
//          B...B                               //
//          BBBB.                               //
//          B...B                               //
//          BBBB.     EEEE                      //
//                    E...                      //
//                    EEEE                      //
//                    E...                      //
//                    EEEE   DDD.               //
//                           D..D               //
//                           D..D               //
//                           D..D               //
//                           DDD.   .OOO.       //
//                                  O...O       //
//                                  O...O       //
//                                  O...O       //
//                                  .OOO.       //
//===============================================
void fio()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
}

void file_io(string fname)
{

    freopen((fname + ".in").c_str(), "r", stdin);
    freopen((fname + ".out").c_str(), "w", stdout);
}
void file_i(string fname)
{

    freopen((fname + ".in").c_str(), "r", stdin);
}
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
void cv(vector<int> &arr, int n)
{
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void rv(const vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool Knowbit(ll n, int i)
{
    return (n >> i) & 1;
}
ll Setbit(ll n, int i)
{
    return n | (1 << i);
}
ll Resetbit(ll n, int i)
{
    return n & (~(1 << i));
}
ll flip(ll n, int i)
{
    return n ^ (1 << i);
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return 0;
    return !(n & (n - 1));
}
// ------------------ Global variables declaration --------------------- //

// -------------------------------------------------------------------- //

//---------------------------------methods-------------------------------------

//---------------------------------methods-------------------------------------

int main()
{
    // testing = true;
    fio();
    if (testing)
    {
        file_i("test");
    }
    //-------------------------------solution--------------------------------
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (Knowbit(mask, i) == 1)
            {
                if (s[i] & 1)
                    odd++;
                else
                    even++;
            }
        }
        if (even > odd)
            ans++;
    }
    cout << ans;
    //-----------------------------------------------------------------------
    return 0;
}