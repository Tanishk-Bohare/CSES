#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n,t,c=1;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;++i){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    for(int i=1;i<n;++i){
        if(v[i]==v[i-1])
            continue; 
        c++;
    }
    cout<<c;
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}