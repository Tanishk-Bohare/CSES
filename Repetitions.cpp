#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int ans=0,c=1;
    for(int i=1;i<s.length();++i){
        if(s[i]==s[i-1])
            c++;
        else {
            ans=max(ans,c);
            c=1;
        }
    }
    cout<<max(ans, c);
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }

    return 0;
}