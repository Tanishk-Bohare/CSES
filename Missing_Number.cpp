#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long t, sum=n*(n+1)/2;
    for(int i=1;i<n;++i){
        cin>>t;
        sum-=t;
    }
    cout<<sum;
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}