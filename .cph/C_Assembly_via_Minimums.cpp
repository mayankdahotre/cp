// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v;
//     for(int i=0; i<n*(n-1)/2; i++) cin>>v[i];
//     sort(v.begin(), v.end());

//     map<int,int> m;
//     for(int i=0; i<v.size(); i++) m[v[i]]++;

//     vector<int> ans(n);
//     int f = n-1;
//     for(auto [val,freq]: m){
//         while(freq){
//             f-=f;
//             f--;
//             ans.push_back(val);
//         }
//     }
//     ans.push_back(v[v.size()-1]);
    
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
    int n;
    cin >> n;

    vector<int> v(n * (n - 1) / 2);
    for (int i = 0; i < v.size(); i++) cin >> v[i];
    sort(v.begin(), v.end());

    multiset<int> ms;
    for (auto x : v) ms.insert(x);

    vector<int> ans;
    int take = n - 1;

    while (take--) {
        int val = *ms.rbegin();
        ans.push_back(val);
        for (int i = 0; i < ans.size(); i++) {
            ms.erase(ms.find(val));
        }
    }

    ans.push_back(1e9);

    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
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
