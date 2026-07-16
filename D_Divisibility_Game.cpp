// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     vector<int> b(m);
//     for(int i=0; i<m; i++) cin>>b[i];

//     vector<int> ua;
//     map<int,int> mp;
//     for(int i=0; i<n; i++){
//         if(mp.count(a[i])) continue;
//         else{
//             mp[a[i]]++;
//             ua.push_back(a[i]);
//         }
//     }

//     int k=ua.size();
//     sort(ua.begin(), ua.end());

//     vector<pair<int,int>> c(m);

//     for(int i=0; i<m; i++){
//         for(int j=0; j<k; j++){
//             if(b[i]%ua[j]==0) c[i].first++;
//             else c[i].second++;
//         }
//     }

//     int com = 0;
//     int odiv = 0;
//     int onondiv = 0;
//     for(int i=0; i<m; i++){
//         if(c[i].first && c[i].second) com++;
//         else if(c[i].first) odiv++;
//         else onondiv++;
//     }

//     if(odiv-com >= onondiv-com){
//         cout<<"Alice"<<endl;
//         return;
//     }
//     cout<<"Bob"<<endl;
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
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    unordered_set<int> st(a.begin(), a.end());

    int cnt = 0;

    for(int i = 0; i < m; i++){
        for(int x : st){
            if(b[i] % x == 0){
                cnt++;
                break;
            }
        }
    }

    if(cnt > m - cnt) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}