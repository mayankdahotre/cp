#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;

    string s;
    cin >> s;

    string res(n, '+');

    int n0=0, n1=0, n2=0;
    for(int i=0; i<k; i++){
        if(s[i]=='0') n0++;
        else if(s[i]=='1') n1++;
        else n2++;
    }

    // left side
    for(int i=0; i<n0; i++){
        res[i]='-';
        // cout<<res<<endl;
    }
    // cout<<endl;
    for(int i=n0; i<n0+n2; i++){
        res[i]='?';
        // cout<<res<<endl;
    }
    // cout<<endl;

    // right side
    for(int i=0; i<n1; i++){
        res[n-1-i]='-';
        // cout<<res<<endl;
    }
    // cout<<endl;
    for(int i=0; i<n2; i++){
        res[n-n1-1-i]='?';
        // cout<<res<<endl;
    }
    // cout<<endl;

    if(n2==n-n1-n0){
        for(int i=0; i<n; i++) res[i]='-';
    }

    cout << res << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}