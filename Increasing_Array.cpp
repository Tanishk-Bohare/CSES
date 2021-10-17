#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n,ans=0;
    cin>>n;
    long long t, rm=INT_MIN;
    for(int i=0;i<n;++i){
        cin>>t;
        if(t>=rm)rm= t;
        else {
            ans+= rm-t;
        }
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