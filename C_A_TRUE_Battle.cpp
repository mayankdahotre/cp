#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    // if(s[0]=='1' || s[n-1]=='1') cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        if(s[i]=='1') v[i]=1;
        else v[i]=0;
    }

    if(v[0]||v[n-1]){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=1; i<n; i++){
        if(v[i]&&v[i-1]){
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