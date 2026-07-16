// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v(n, vector<int> (m,0));
//     set<int> c;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             int x;
//             cin>>x;
//             c.insert(x);
//             v[i][j]=x;
//         }
//     }

//     int cn = c.size();

//     map<int,int> mp;
//     for(auto i: c) mp[i]=1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(i>0) if(v[i][j]==v[i-1][j]) mp[v[i][j]]=2;
//             if(i<n) if(v[i][j]==v[i+1][j]) mp[v[i][j]]=2;
//             if(j>0) if(v[i][j]==v[i][j-1]) mp[v[i][j]]=2;
//             if(j<n) if(v[i][j]==v[i][j+1]) mp[v[i][j]]=2;
//         }
//     }

//     bool ok = false;
//     for(auto p: mp){
//         if(p.second==1){
//             ok = true;
//             break;
//         }
//     }

//     if(!ok){
//         cout<<(cn-1)*2<<endl;
//         return;
//     }
//     else{
//         int ans=0;
//         for(auto p: mp){
//             ans+=p.second;
//         }
//         ans--;

//         cout<<ans<<endl;
//         return;
//     }
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

    vector<vector<int>> v(n, vector<int>(m));
    map<int, int> mp;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>v[i][j];
            mp[v[i][j]] = 1;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (i+1<n && v[i][j]==v[i+1][j])
                mp[v[i][j]] = 2;

            if (j+1<m && v[i][j]==v[i][j+1])
                mp[v[i][j]]=2;
        }
    }

    int sum=0, mx=0;

    for(auto p: mp) {
        sum += p.second;
        mx = max(mx, p.second);
    }

    cout<<sum-mx<<endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}