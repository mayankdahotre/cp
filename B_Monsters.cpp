// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     priority_queue<pair<int,int>> pq;
//     for(int i=0; i<n; i++) pq.push({v[i],i});

//     vector<int> ans;
//     while(pq.size()){
//         int val = pq.top().first;
//         int idx = pq.top().second;
//         pq.pop();

//         val-=k;

//         if(val<=0){
//             ans.push_back(idx+1);
//             continue;
//         }
//         else{
//             pq.push({val,idx});
//         }
//     }

//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
//     cout<<endl;

//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> v;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        int rem = x % k;
        if(rem == 0) rem = k;

        v.push_back({-rem, i+1}); 
    }

    sort(v.begin(), v.end());

    for(auto it : v) cout<<it.second<<" ";
    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
}