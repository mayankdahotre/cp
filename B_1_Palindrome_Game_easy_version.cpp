#include <bits/stdc++.h>
using namespace std;

#define int long long

bool p(string s){
    string t = s;
    reverse(t.begin(), t.end());
    return s==t;
}

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int z=0;
    for(int i=0; i<n; i++) if(s[i]=='0') z++;

    if(z==1){
        cout<<"BOB"<<endl;
        return;
    }
    if(z%2){
        cout<<"ALICE"<<endl;
        return;
    }

    cout<<"BOB"<<endl;
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