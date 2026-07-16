// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int q;
//     cin>>q;

//     vector<pair<int,int>> que(q);
//     for(int i=0; i<q; i++) cin>>que[i].first>>que[i].second;

//     vector<pair<int,int>> pd;
//     for(int i=0; i<n-1; i++) if(v[i]!=v[i+1]) pd.push_back({i,i+1});

//     for(int i=0; i<q; i++){
//         int idx = lower_bound(vp.begin(), vp.end(), que[i].first) - vp.begin();
        
//         if(idx!=n){
//             if(vp[idx].second <= que[i].second){
//             cout<<vp[i].first<<" "<<vp[i].second<<endl;
//             continue;
//         }

//         cout<<-1<<" "<<-1<<endl;
//         continue;
//     }

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

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int q;
    cin >> q;

    vector<pair<int,int>> que(q);
    for(int i = 0; i < q; i++) cin >> que[i].first >> que[i].second;

    vector<pair<int,int>> pd;
    for(int i = 0; i < n-1; i++){
        if(v[i] != v[i+1]){
            pd.push_back({i, i+1});
        }
    }

    for(int i = 0; i < q; i++){
        int l = que[i].first - 1;
        int r = que[i].second - 1;

        int idx = lower_bound(pd.begin(), pd.end(), make_pair(l, -1LL)) - pd.begin();
        if(idx < pd.size() && pd[idx].second <= r){
            cout << pd[idx].first + 1 << " " << pd[idx].second + 1 << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
    cout<<endl;

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