#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    map<int, pair<int,int>> m;
    
    int cnt=1;
    int val=a[0];

    for(int i=1; i<n; i++){
        if(a[i]==val) cnt++;
        else{
            m[val].first = max(m[val].first, cnt); // FIX
            cnt=1;
            val=a[i];
        }
    }
    m[val].first = max(m[val].first, cnt); // FIX

    cnt=1;
    val=b[0];

    for(int i=1; i<n; i++){
        if(b[i]==val) cnt++;
        else{
            m[val].second = max(m[val].second, cnt);
            cnt=1;
            val=b[i];
        }
    }
    m[val].second = max(m[val].second, cnt);

    int len=0;
    for(auto it : m){
        len = max(len, it.second.first + it.second.second);
    }

    cout<<len<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}