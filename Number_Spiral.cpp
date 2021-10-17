#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll x, y;
    cin>>x>>y;
    ll m= max(x, y), mid= (m*m+(m-1)*(m-1)+1 )/2 ;
    if(m==1){
        cout<<1<<endl;
        return;
    }
    // cout<<mid<<" ";
    if(m%2)swap(x,y);
    if(x==m){
        // cout<<" ";
        cout<<mid-y+m<<endl;
    }
    else    cout<<mid+x-m <<endl;
}

int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}