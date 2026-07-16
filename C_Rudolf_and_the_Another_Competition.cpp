// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
//     if(a.second.first==b.second.first) return a.second.second<=b.second.second;
//     return s.second.first<b.second.first;
// }

// void solve() {
//     int n,m,h;
//     cin>>n>>m>>h;

//     vector<vector<int>> t(n, vector<int>(m,0));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>t[i][j];

//     for(int i=0; i<n; i++) sort(t[i].begin(), t[i].end());

//     for(int i=0; i<n; i++) for(int j=1; j<m; j++) t[i][j]+=t[i][j-1];

//     vector<pair<int,pair<int,int>>> v;

//     for(int i=0; i<n; i++){
//         int lb = *lower_bound(t[i].begin(), t[i].end(), h);
//         int s = t[i].find(lb);

//         v[i] = {i+1,{s, lb}};
//     }

//     sort(v.begin(), v.end(), cmp);

//     int idx=1;
//     for(int i=0; i<n; i++){
//         if(v[i].first==1){
//             idx=i+1;
//             break;
//         }
//     }

//     cout<<idx<<endl;
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







// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
//     if(a.second.first==b.second.first) return a.second.second<b.second.second;
//     return a.second.first<b.second.first;
// }

// void solve() {
//     int n,m,h;
//     cin>>n>>m>>h;

//     vector<vector<int>> t(n, vector<int>(m,0));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>t[i][j];

//     for(int i=0; i<n; i++) sort(t[i].begin(), t[i].end());

//     for(int i=0; i<n; i++) for(int j=1; j<m; j++) t[i][j]+=t[i][j-1];

//     vector<pair<int,pair<int,int>>> v;

//     for(int i=0; i<n; i++){
//         auto it = upper_bound(t[i].begin(), t[i].end(), h);
//         int bu = *it;
//         int p = accumulate(t[i].begin(), it, 0);        
//         int s = it - t[i].begin();

//         v.push_back({i+1,{s, p}});
//     }

//     sort(v.begin(), v.end(), cmp);

//     // for(int i=0; i<n; i++) cout<<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
//     // cout<<endl;

//     int idx=0;
//     for(int i=0; i<n; i++){
//         if(v[i].first==1){
//             idx=i+1;
//             break;
//         }
//     }

//     cout<<idx<<endl;
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

bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    if(a.second.first==b.second.first && a.second.second==b.second.second) return a.first<b.first; // fix
    if(a.second.first==b.second.first) return a.second.second<b.second.second;
    return a.second.first>b.second.first;
}

void solve() {
    int n,m,h;
    cin>>n>>m>>h;

    vector<vector<int>> t(n, vector<int>(m,0));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>t[i][j];

    for(int i=0; i<n; i++) sort(t[i].begin(), t[i].end());

    vector<pair<int,pair<int,int>>> v;

    for(int i=0; i<n; i++){
        int tm=0, p=0, s=0;
        for(int j=0; j<m; j++){
            if(tm+t[i][j]>h) break;
            tm+=t[i][j];
            p+=tm;
            s++;
        }
        v.push_back({i+1,{s,p}});
    }

    sort(v.begin(), v.end(), cmp);

    int idx=0;
    for(int i=0; i<n; i++){
        if(v[i].first==1){
            idx=i+1;
            break;
        }
    }

    cout<<idx<<endl;
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