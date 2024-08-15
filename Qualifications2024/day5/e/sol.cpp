#include<bits/stdc++.h>
using namespace std;
#define DE4A ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define mp(a,b) make_pair(a,b) 
void mfile(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}


int main(){

    DE4A
    mfile() ;

    for( int i = 54 ; i < 60 ; ++i ){

        ll n = pow(2 , i) - 1  ;

        if( n < 4 ){;
            cout << -1 << "\n" ;
            continue;
        }


        int x = log(n + 1) / log(2) ;
        ll plus = n - (ll)pow( 2 , x ) + 1ll ;

        if( !plus ){
            cout << -1 << "\n" ;
            continue; 
        }
        
        int l = log( plus + 1 ) / log(2) ;

        cout << x - l << "\n" ;

    }

}