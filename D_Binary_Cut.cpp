#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length();

    if(is_sorted(s.begin(), s.end())){
        cout<<1<<endl;
        return;
    }

    int ans=1;
    int cnt=0;
    
    for(int i=0; i<n-1; i++){
        if(s[i]=='1' && s[i+1]=='0') ans++;
        if(s[i]=='0' && s[i+1]=='1'){
            if(cnt<1) cnt++;
            else ans++;
        }
    }

    cout<<ans<<endl;
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