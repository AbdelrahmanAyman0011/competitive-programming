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

string s;
int  i = 0;
int arr[999] , n ;

// 3n + 1  -> n = 24  =>  if even   n = n / 2  else n = 3n + 1
int cnt;

int fpow(int a , int b){
    if(b == 0)
        return 1;
    int ret = fpow(a , b / 2);
    return(b & 1 ? ret * ret *a : ret * ret);
}

ll ab(int a , int b){
    if(b == 0)
        return 1;
    return a *ab(a , b - 1);
}

int f(int n){
    if(n == 1)
        return 1;
    if(n % 2 == 0)
        return 1 + f(n / 2);
    else
        return 1 +f(3 * n + 1);
}

int sum(int idx){
    if(idx == n)
        return 0;
    return arr[idx] + sum(idx + 1);
}

void preverse (int idx){
    if(idx == (int)s.size())
        return;
    preverse(idx + 1);
    cout <<s[idx];
}

int factorial(int n)
{
    if (n == 1 or n == 0)
        return 1;
    return n * factorial(n - 1);
}

void solve()
{   
    int a , b;
    cin >> a >> b; 
    cout << fpow(a, b) << endl;
    // cin >> n;
    // cout << f(n) << endl;
    // // for(int i = 0; i < n ;i++)
    //     cin >> arr[i];
    // cout << sum(0);
    // cin >> s;
    // preverse(0);
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