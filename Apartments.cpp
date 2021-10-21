#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define li long int

void solve(){
    li n, m, k, t, ans=0;
    cin>>n>>m>>k;
    vector<li>v(n), a(m);
    for(int i=0;i<n;++i)
    cin>>v[i];
    for(int i=0;i<n;++i)
    cin>>a[i];
    sort(a.begin(), a.end());
    sort(v.begin(), v.end());
    li i=0,j=0;
    while(i<n && j<m){
        if(abs(v[i]-a[j])<=k)i++,j++,ans++;
        else if(v[i]>a[j]) j++;
        else i++;
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