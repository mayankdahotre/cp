#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,l,r;
    cin>>n>>l>>r;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> pre(n+1,0);
    for(int i=1; i<=n; i++) pre[i]=pre[i-1]+v[i-1];

    if(*min_element(v.begin(), v.end())>r){
        cout<<0<<endl;
        return;
    }

    // int ans=0;
    // deque<int> vx;
    // for(int i=0; i<=n; i++){
    //     for(auto x: vx){
    //         int sum = pre[i]-pre[x];
    //         // debug(sum);
    //         if(sum<l){
    //             vx.push_back(i);
    //         }
    //         if(sum>=l && sum<=r){
    //             ans++;
    //             x=i;
    //             vx.clear();
    //             vx.push_back(i);
    //         }
    //         if(sum>r){
    //             vx.pop_front();
    //         }
    //     }
    // }

    // int ans = 0;
    // int cur = 0;

    // for(int i=0; i<n; i++){
    //     cur += v[i];

    //     if(cur>=l && cur<=r){
    //         ans++;
    //         cur = 0;
    //     }
    //     else if(cur>r){
    //         cur = v[i];

    //         if(cur>=l && cur<=r){
    //             ans++;
    //             cur = 0;
    //         }
    //     }
    // }


    // int ans=0;
    // int cur=0;
    // int i=0, j=0;

    // while(i<=j && j<=n){
    //     if(cur<l){
    //         cur+=v[j];
    //         j++;
    //         continue;
    //     }
    //     else if(cur>r){
    //         cur-=v[i];
    //         i++;
    //         continue;
    //     }
    //     else{
    //         cur=0;
    //         ans++;
    //         j++;
    //         i=j;
    //         continue;
    //     }
    // }

    int ans=0;
    long long cur=0;

    int i=0;

    for(int j=0; j<n; j++) {
        cur+=v[j];

        while(i<=j && cur>r) {
            cur-=v[i];
            i++;
        }

        if(cur>=l && cur<=r) {
            ans++;
            cur=0;
            i=j+1;
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