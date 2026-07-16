#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length();


    if(s.find("*<")!=string::npos || s.find(">*")!=string::npos || s.find("><")!=string::npos || s.find("**")!=string::npos){
        cout<<-1<<endl;
        return;
    }

    int nl=0, nr=0, nm=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='<') nl++;
        else if(s[i]=='>') nr++;
        else nm++;
    }

    cout<<max(nm+nl, nm+nr)<<endl;
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