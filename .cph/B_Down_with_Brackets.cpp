#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length(), m=0, num=0;
    for(int i=0; i<n; i++){
        if(s[i]=='(') m++;
        else m--;
        if(m==0) num++;
        if(num>1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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