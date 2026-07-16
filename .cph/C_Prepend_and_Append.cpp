#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    while(true){
        int l = s.length();
        if(s[0]=='0' && s[l-1]=='1') s = s.substr(1, l-2);
        else if(s[0]=='1' && s[l-1]=='0') s = s.substr(1, l-2);
        else break;
    }

    cout<<s.length()<<endl;
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