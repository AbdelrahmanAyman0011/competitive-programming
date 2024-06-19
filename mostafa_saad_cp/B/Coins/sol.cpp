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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a = 0, b = 0, c = 0;
    if (s1[1] == '>')
    {
        if (s1[0] == 'A')
            a++;
        if (s1[0] == 'B')
            b++;
        if (s1[0] == 'C')
            c++;
    }
    else
    {
        if (s1[2] == 'A')
            a++;
        if (s1[2] == 'B')
            b++;
        if (s1[2] == 'C')
            c++;
    }
    if (s2[1] == '>')
    {
        if (s2[0] == 'A')
            a++;
        if (s2[0] == 'B')
            b++;
        if (s2[0] == 'C')
            c++;
    }
    else
    {
        if (s2[2] == 'A')
            a++;
        if (s2[2] == 'B')
            b++;
        if (s2[2] == 'C')
            c++;
    }
    if (s3[1] == '>')
    {
        if (s3[0] == 'A')
            a++;
        if (s3[0] == 'B')
            b++;
        if (s3[0] == 'C')
            c++;
    }
    else
    {
        if (s3[2] == 'A')
            a++;
        if (s3[2] == 'B')
            b++;
        if (s3[2] == 'C')
            c++;
    }
    if(a == 1 and b == 1 and  c == 1)
    {
        cout << "Impossible"<<endl;
        return;
    }
    if (a == 0)
    {
        {
            if (b < c)
                cout << "ABC" << endl;
            else
                cout << "ACB" << endl;
        }
    }
    if (b == 0)
    {
        {
            if (a < c)
                cout << "BAC" << endl;
            else
                cout << "BCA" << endl;
        }
    }
    if (c == 0)
    {
        {
            if (b < a)
                cout << "CBA" << endl;
            else
                cout << "CAB" << endl;
        }
    }
}
/*
A>B
C<B
A>C

*/
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
