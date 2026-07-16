// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int mx = 0;
//     int ans = 0;
//     bool ok = v[0]==0;
//     for(int i=0; i<n; i++){
//         if(v[i]){
//             if(ok){
//                 mx=max(mx, v[i]-1);
//                 ok=false;
//             }
//             else mx = max(mx, v[i]);
//         }
//         else{
//             ans+=mx;
//             mx=0;
//             ok=true;
//             // ans--;
//         }
//     }
//     ans+=mx;
//     ans--;

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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    // if(n==1){
    //     cout<<v[0]-1<<endl;
    //     return;
    // }

    // vector<int> v2;
    // for(int i=0; i<n-1; i++) if(v[i]!=v[i+1]) v2.push_back(v[i]);
    // if(v[n-2]!=v2[n-1]) v2.push_back(v[n-1]);

    // vector<int> p;
    // // p.push_back(0);
    // p.push_back(v2[0]);
    // for(int i=1; i<v2.size()-1; i++){
    //     if(v2[i]>v2[i-1] && v2[i]>v2[i+1]) p.push_back(v2[i]);
    //     if(v2[i]<v2[i-1] && v2[i]<v2[i+1]) p.push_back(v2[i]);
    // }
    // p.push_back(v2[v2.size()-1]);
    // p.push_back(0);

    // int ans=0;
    // for(int i=0; i<p.size()-1; i++) ans+=abs(p[i+1]-p[i]);
    // for(int i=2; i<p.size()-1; i+=2) ans-=abs(p[i+1]-p[i-1]);

    int ans = v[0]-1;

    for(int i=1; i<n; i++) ans+=max(0LL, v[i]-v[i-1]); 

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