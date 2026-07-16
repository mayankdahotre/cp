#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;

    vector<int> v(26,0);
    for(int i=0; i<n; i++){
        if(v[s[i]-'a']==0){
            v[s[i]-'a']++;
            ans+=n-i;
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}