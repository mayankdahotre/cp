#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s = to_string(n);
    reverse(s.begin(), s.end());

    bool b = false;
    int num = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='0' && b==false) b=true;
        if(s[i]=='0' && b==false) num++;
        else if(s[i]!='0' && b==true) num++;
    }

    cout<<num-1<<endl;
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