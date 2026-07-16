// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<string> v(n);
//     for(int i=0; i<n; i++) cin>>s;

//     vector<vector<int>> x;
//     for(int i=0; i<min(n/2,m/2); i++){
//         string t;
//         for(int j=i; j<m; j++) t+=v[i][j];
//         for(int j=i+1; j<n; j++) t+=v[i]; 
//         for(int j=i; j<m; j++) t+=v[i][j];
//         for(int j=i+1; j<n; j++) t+=v[i]; 

//         n-=2;
//         m-=2;

//         for(int i=0; i<3; i++) t+=v[i][j];

//         x.push_back(t);
//     }

//     int ans=0;
//     for(int i=0; i<x.size(); i++){
//         int j=0;
//         while(true){
//             auto it = s.find("1543", j);
//             ans++;
//         }
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

void solve(){
    int n,m;
    cin>>n>>m;

    vector<string>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int ans=0;

    for(int k=0; k<min(n,m)/2; k++){
        string s;

        int u=k, d=n-k-1, l=k, r=m-k-1;

        for(int j=l; j<=r; j++) s+=v[u][j];
        for(int i=u+1; i<=d; i++) s+=v[i][r];
        for(int j=r-1; j>=l; j--) s+=v[d][j];
        for(int i=d-1; i>u; i--) s+=v[i][l];

        string t=s+s.substr(0,3);

        for(int i=0; i<s.size(); i++){
            if(t.substr(i,4)=="1543") ans++;
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;

    while(T--)solve();

    return 0;
}