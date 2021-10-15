
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return;
    }
    vector<int>v(n);
    int a=1;
    for(int i=1;i<n;i+=2){
        v[i]=a++;
    }
    for(int i=0;i<n;i+=2)
        v[i]=a++;
    for(int i=0;i<n;++i)
        cout<<v[i]<<" ";
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}