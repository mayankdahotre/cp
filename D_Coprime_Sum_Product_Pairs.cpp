#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAX = 1e6 + 5;

int freq[MAX], cnt[MAX], dp[MAX];

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
        freq[x]++;
    }

    for(int g=1; g<MAX; g++){
        for(int multiple=g; multiple<MAX; multiple+=g){
            cnt[g] += freq[multiple];
        }
    }

    for(int g=MAX-1; g>=1; g--){
        dp[g] = cnt[g]*(cnt[g]-1)/2;
        for(int multiple=2*g; multiple<MAX; multiple+=g){
            dp[g] -= dp[multiple];
        }
    }

    cout << dp[1] << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
