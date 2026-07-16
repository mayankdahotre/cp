// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin>>n>>m;

//     vector<string> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     if(n==1 && m==1){
//         cout<<"YES"<<endl;
//         return;
//     } 
    
//     if(n==1 && m!=1){
//         if(v[0][0]!=v[0][m-1]) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;

//         return;
//     }

//     if(n!=1 && m==1){
//         if(v[0][0]!=v[n-1][0]) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;

//         return;
//     }

//     string l,r;
//     for(int i=0; i<n; i++) { l+=v[i][0]; r+=v[i][m-1]; }

//     string u=v[0], d=v[n-1];

//     int uc=0, dc=0, hc=0;
//     for(int i=0; i<m; i++){
//         if(u[i]=='W'){ uc++; hc++; }
//         else{ uc--; hc--; }

//         if(d[i]=='W'){ dc++; hc++; }
//         else{ dc--; hc--; }
//     }

//     if(abs(uc)==m && abs(dc)==m && hc==0){
//         cout<<"NO"<<endl;
//         return;
//     }

//     int lc=0, rc=0, vc=0;
//     for(int i=0; i<n; i++){
//         if(l[i]=='W'){ lc++; vc++; }
//         else{ lc--; vc--; }

//         if(r[i]=='W'){ rc++; vc++; }
//         else{ rc--; vc--; }
//     }

//     if(abs(lc)==n && abs(rc)==n && hc==0){
//         cout<<"NO"<<endl;
//         return;
//     }

//     cout<<"YES"<<endl;
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
    cin>>n>>m;

    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    string l, r;
    for(int i=0; i<n; i++){ l+=v[i][0]; r+=v[i][m-1]; }

    string u=v[0], d=v[n-1];

    bool uSame = (count(u.begin(),u.end(),'W')==m || count(u.begin(),u.end(),'B')==m);
    bool dSame = (count(d.begin(),d.end(),'W')==m || count(d.begin(),d.end(),'B')==m);
    bool lSame = (count(l.begin(),l.end(),'W')==n || count(l.begin(),l.end(),'B')==n);
    bool rSame = (count(r.begin(),r.end(),'W')==n || count(r.begin(),r.end(),'B')==n);

    if(uSame && dSame && u[0]!=d[0]){ cout<<"NO"<<endl; return; }
    if(lSame && rSame && l[0]!=r[0]){ cout<<"NO"<<endl; return; }

    cout<<"YES"<<endl;
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