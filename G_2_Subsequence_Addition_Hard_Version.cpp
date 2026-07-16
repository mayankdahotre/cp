#include <bits/stdc++.h>
using namespace std;

#define int long long

bool helper(int i, vector<int> &v, vector<int> &dp){
    if(dp[i]!=-1) return dp[i];
    if(i==0) return true;

    int mask = 
    for(int j=0; j<i; j++){
        if(dp[i-])
    }
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> dp(n,-1);
    dp[0]=1;

    for(int i=0; i<n; i++){
        if(!helper(i, v, dp)){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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