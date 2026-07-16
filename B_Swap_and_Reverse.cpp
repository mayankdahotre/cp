#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    if(k%2==0){
        vector<char> c;
        for(int i=0; i<n; i++) c.push_back(s[i]);

        sort(c.begin(), c.end());

        string ans;
        for(int i=0; i<n; i++) ans+=c[i];


        cout<<ans<<endl;
        return;
    }
    else{
        vector<char> o,e;

        for(int i=0; i<n; i++){
            if(i%2) o.push_back(s[i]);
            else e.push_back(s[i]);
        }

        sort(o.begin(), o.end());
        sort(e.begin(), e.end());

        string ans;

        for(int i=0; i<o.size(); i++){
            ans += e[i];
            ans += o[i];
        }

        if(e.size() > o.size()) ans += e.back();

        cout<<ans<<endl;
    }
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