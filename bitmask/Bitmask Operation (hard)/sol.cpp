#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl;
#define no cout <<"NO" << endl;
const long double PI = acos(-1.0);
#include <bits/stdc++.h>
using namespace std;

#define ll long long

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool knowbit(ll n, int i) {
    return (n >> i) & 1;
}

ll setbit(ll n, int i) { // 0 to 1
    return n | (1 << i);
}

ll resetbit(ll n, int i) { // 1 to 0
    return n & (~(1 << i));
}

ll flib(ll n, int i) {
    return n ^ (1 << i);
}
bool isPowerOfTwo(int n){
    if(n == 0)
        return 0;
    else
        return !(n &(n - 1));
}



void solve()
{
    int q;
    int n;
    cin >> n >> q;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            for(int i = 0; i < 32 ; i ++)
            {
                if(knowbit(n , i) == 0)
                    {
                        n = setbit(n , i);
                        break;
                    }
            }
            cout << n <<endl;
        }
        else if (op == 2)
        {
            for(int i = 0; i < 32 ; i ++)
            {
                if(knowbit(n , i) == 1)
                    {
                        n = resetbit(n , i);
                        break;
                    }
            }
            cout << n <<endl;
        }
        else if (op == 3)
        {
            if (n == 0)
                n = -1;
            else
            {
                for(int i = 0 ; i < 32 ; i++){
                    if(knowbit(n , i) == 0)
                        n = setbit(n , i);
                    else
                        break;
                }
            }
            cout << n<< endl;
        }
        else if (op == 4)
        {
            for(int i = 0 ; i < 32 ; i++){
                    if(knowbit(n , i) == 1)
                        n = resetbit(n , i);
                    else
                        break;
                }
                cout << n << endl;
        }
        else{
            if(isPowerOfTwo(n) == 1)
                cout << "is power of two\n";
            else
                cout << "not power of two\n";

        }
    }
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