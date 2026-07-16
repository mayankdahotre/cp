#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length();
    for(int i=0; i<n; i++){
        if(i==0){
            if(s[i]==s[i+1]){
                if(s[i]!='a') s[i]=s[i]-1;
                else s[i]='z';
            }
        }
        if(i==n-1){
            if(s[i]==s[i-1]){
                if(s[i]!='a') s[i]=s[i]-1;
                else s[i]='z';
            }
        }
        else{
            if(s[i]==s[i+1] && s[i]==s[i-1]){
                s[i]=s[i]+1;
            }
        }
    }

    cout<<s<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}