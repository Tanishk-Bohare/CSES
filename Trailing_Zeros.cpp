#include <bits/stdc++.h>
using namespace std;
#define lo long 
#define ll long long 

void solve(){
    lo n;
    cin>>n;
    lo ans=0;
    while(n){
        ans+=n/5;
        n/=5;
    }
    cout<<ans;

}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}