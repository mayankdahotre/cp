// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     vector<int> b = a;
//     sort(b.begin(), b.end(), greater<int>());

//     map<int,vector<int>> mp;
//     int d = 1;

//     for(int i=0; i<n; i++){
//         mp[b[i]].push_back(d);
//         if(i%2==1) d++;
//     }

//     vector<int> x(n+1);
//     x[0] = 0;

//     map<int,int> vis;

//     for(int i=1; i<=n; i++){
//         int val = a[i-1];

//         int d = vis[val];
//         if(vis[val]%2) x[i] = mp[val][vis[val]];
//         else x[i] = -mp[val][vis[val]];
        
//         vis[val]++;
//     }

//     for(int i=0; i<=n; i++) cout<<x[i]<<" ";
//     cout<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin>>T;
//     while(T--) solve();

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back({x,i});
    }

    sort(v.begin(), v.end(), greater<pair<int,int>>());

    vector<int> pos(n+1);
    pos[0] = 0;

    int cur = 1;
    int ans = 0;

    for(int i=0;i<n;i++){
        int idx = v[i].second;
        int val = v[i].first;

        if(i%2==0){
            pos[idx] = cur;
        }
        else{
            pos[idx] = -cur;
            cur++;
        }

        ans += 2 * abs(pos[idx]) * val;
    }

    cout<<ans<<endl;

    for(int i=0;i<=n;i++){
        cout<<pos[i]<<" ";
    }
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}