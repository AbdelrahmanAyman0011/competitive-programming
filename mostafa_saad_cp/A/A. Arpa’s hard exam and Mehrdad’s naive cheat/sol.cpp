#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()
#define Bedo cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);
#define yes cout <<"YES" << endl; 
#define no cout <<"NO" << endl; 

void solve(){
    ll n,m;
    cin>>n;

    m=n%8;
    //cout<<m<<endl;
    if(n==0)        {cout<<"1"<<endl;}
    else if(m==0){cout<<"6"<<endl;}
    else if(m==1){cout<<"8"<<endl;}
    else if(m==2){cout<<"4"<<endl;}
    else if(m==3){cout<<"2"<<endl;}
    else if(m==4){cout<<"6"<<endl;}
    else if(m==5){cout<<"8"<<endl;}
    else if(m==6){cout<<"4"<<endl;}
    else if(m==7){cout<<"2"<<endl;}

}

int main() {
    Bedo
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
