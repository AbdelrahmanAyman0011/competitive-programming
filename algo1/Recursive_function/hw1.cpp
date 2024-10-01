#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);
int  sol (int n){
    if(n == 1)
        return 1;
    if(n%2 == 0)
        return 1 + sol(n /2);
    else
        return 1 + sol(3 * n + 1);
}
int pow (int v , int p){
    if(p == 0)
        return 1;
    return v * pow(v ,p - 1);
}
int maximum (int arr[] , int len){
    if(len == 1)
        return arr[0];
    return max(arr[len - 1] , maximum(arr , len - 1));
}
int sum (int arr[] , int len)
{
    if(len == 0)
        return 0;
    return arr[len - 1] + sum(arr,len - 1);
}
double ave (int arr[] , int len)
{
    if (len == 1)
        return arr[0];
    double sub_res = ave(arr , len - 1);
    sub_res *= len - 1;
    return (sub_res + arr[len - 1])/ len; 
}
void array_increment(int arr[], int len){
    if(len == 0)
        return;
    arr[len] += len;
    array_increment(arr , len - 1);
}

void accumulate_arr(int arr[], int len){
    if (len == 1)
        return; 
    accumulate_arr(arr , len - 1);
    arr[len - 1] += arr[len - 2];
}
void left(int arr[], int len){
    if( len == 1)
        return;
    left(arr , len - 1);
    arr[len - 1] = max(arr[len - 1], arr[len - 2]);
}

void solve() {
    // int n; cin >>n;
    // cout <<sol(n) << endl;
    // int v , p; cin  >> v >> p;
    // cout << pow(v , p) << endl;
    int len = 5;
    int arr[] = {1,8, 2, 10, 3};
    // cout << ave(arr , len) << endl;
    // array_increment(arr , len);
    //cout << ave( arr, len);
    
    left(arr , len );
    for(int i = 0 ; i < len ; i++)
        cout << arr[i] << " ";
}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--) {
        solve();
    }
    return 0;
}