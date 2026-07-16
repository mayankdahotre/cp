// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, x, m;
//     cin>>n>>x>>m;

//     vector<pair<int,int>> vp(m);
//     for(int i=0; i<m; i++) cin>>vp[i].first>>vp[i].second;

//     int ok = -1;

//     int l=-1, r=-1;
//     for(int i=0; i<m; i++){
//         if(x>=l && x<=r){
//             l=vp[i].first;
//             r=vp[i].second;
//             ok=i;
//             break;
//         }
//     }

//     if(ok==-1){
//         cout<<1<<endl;
//         return;
//     }

//     for(int i=ok; i<m; i++){
//         if(vp[i].first<=r || vp[i].second>=l){
//             l = min(vp[i].first, l);
//             r = max(vp[i].second, r);
//         }
//     }

//     cout<<r-l+1<<endl;
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
    int n, x, m;
    cin >> n >> x >> m;

    vector<pair<int,int>> vp(m);
    for(int i = 0; i < m; i++){
        cin >> vp[i].first >> vp[i].second;
    }

    int l = x, r = x;

    for(int i = 0; i < m; i++){
        if(vp[i].first <= r && vp[i].second >= l){
            l = min(l, vp[i].first);
            r = max(r, vp[i].second);
        }
    }

    cout << (r - l + 1) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}