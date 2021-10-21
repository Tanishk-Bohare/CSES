#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll mod=10e8+7;

ll binexpo(int a, ll b){
    if(b==0)return 1;
    if(b==1)return a%mod;
    ll c= binexpo(a, b/2)%mod;
    if(b&1)
        return a*c*c%mod;
    return c*c%mod;
}

void solve(){
    ll n;
    cin>>n;
    cout<< binexpo(2, n);
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}