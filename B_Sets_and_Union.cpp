// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     map<int,int> mp;
//     int num=0;
//     vector<vector<int>> v(n);

//     for(int i=0; i<n; i++){
//         int m;
//         cin>>m;

//         vector<int> v2(m);
//         for(int j=0; j<m; j++){
//             cin>>v2[j];

//             if(!mp.count(v2[j])) num++;
//             mp[v2[j]]++;
//         }

//         v[i]=v2;
//     }

//     int ans=0;
//     for(int i=0; i<n; i++){
//         int len=num;
//         for(int j=0; j<v[i].size(); j++) if(mp[v[i][j]]==1) len--;
//         if(ans!=n) ans=max(ans, len);
//     }

//     cout<<ans<<endl;

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
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     map<int,int> mp;
//     int num=0;
//     vector<vector<int>> v(n);

//     for(int i=0; i<n; i++){
//         int sz;                   
//         cin>>sz;                 

//         vector<int> v2(sz);     
//         for(int j=0; j<sz; j++){ 
//             cin>>v2[j];

//             if(!mp.count(v2[j])) num++;
//             mp[v2[j]]++;
//         }

//         v[i]=v2;
//     }

//     map<int,vector<int>> mv;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<v[i].size(); i++){
//             mv[v[i][j]].push_back(i);
//         }
//     }

//     int ans=0;

//     for(auto p: mv){
//         int x = p.first;
//         vector<int> ids = p.second;

//         map<int,int> mpx;
//         for(int i=0; i<ids.size(); i++){
//             for(int j=0; j<v[i].size(); j++){
//                 mpx[v[i][j]]++;
//             }
//         }

//         int len = num-1;

//         for(auto p2: mpx){
//             int y = p2.first;
//             int f = p2.second;
//             if(f==mp[y]) len--;
//         }

//         ans=max(len, ans);
//     }

//     cout<<ans<<endl;

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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    map<int,int> mp;
    int num=0;
    vector<vector<int>> v(n);

    for(int i=0; i<n; i++){
        int sz;
        cin>>sz;

        vector<int> v2(sz);
        for(int j=0; j<sz; j++){
            cin>>v2[j];

            if(!mp.count(v2[j])) num++;
            mp[v2[j]]++;
        }

        v[i]=v2;
    }

    map<int,vector<int>> mv;

    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size(); j++){        
            mv[v[i][j]].push_back(i);
        }
    }

    int ans=0;

    for(auto p: mv){
        int x = p.first;
        vector<int> ids = p.second;

        map<int,int> mpx;
        for(int i=0; i<ids.size(); i++){
            for(int j=0; j<v[ids[i]].size(); j++){   
                mpx[v[ids[i]][j]]++;
            }
        }

        int len = num;

        for(auto p2: mpx){
            int y = p2.first;
            int f = p2.second;
            if(f==mp[y]) len--;
        }

        ans=max(len, ans);
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