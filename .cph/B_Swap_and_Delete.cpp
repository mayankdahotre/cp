#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    string t = s;
    int n = s.length();
    int m=0, maxn=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1') m++;
        else m--;

        if(m==0) maxn = max(maxn,i+1);
    }
    if(m!=0) maxn = max(abs(m),maxn);
    
    cout<<n-abs(maxn)<<endl;
    return;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}