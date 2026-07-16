// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define debug(x) cout << #x << " = " << x << endl;
// // #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

// // void solve() {
// //     int n;
// //     cin>>n;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];

// //     vector<vector<int>> vv;

// //     for(int i=0; i<n; i++){
// //         bool pl = false;
// //         for(auto a: vv){
// //             bool ok = true;
// //             for(int b: a){
// //                 if((v[i]&b)!=0){
// //                     ok = false;
// //                     break;
// //                 }
// //             }
// //             if(ok) pl = true;
// //             break;
// //         }
// //         if(!pl) vv.push_back({v[i]});
// //     }

// //     int ans=0;

// //     int c=0;
// //     for(int i=0; i<32; i++){
// //         c*=2;
// //         c++;
// //     }

// //     for(int i=0; i<vv.size(); i++){
// //         int t = 0;
// //         for(int j=0; j<vv[i].size(); j++){
// //             t|=vv[i][j];
// //         }

// //         if(t==c) ans++;
// //         else ans+=vv[i].size()-1;
// //     }

// //     cout<<ans<<endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         solve();
// //     }

// //     return 0;
// // }




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0;i<n;i++) cin>>v[i];

//     vector<vector<int>> vv;

//     for(int i=0;i<n;i++){

//         bool pl=false;

//         for(auto &a: vv){

//             bool ok=true;

//             for(int b: a){

//                 if((v[i]&b)!=0){
//                     ok=false;
//                     break;
//                 }
//             }

//             if(ok){
//                 a.push_back(v[i]);
//                 pl=true;
//                 break;
//             }
//         }

//         if(!pl) vv.push_back({v[i]});
//     }

//     int ans=0;

//     int c=0;

//     for(int i=0;i<32;i++){
//         c*=2;
//         c++;
//     }

//     for(int i=0;i<vv.size();i++){

//         int t=0;

//         for(int j=0;j<vv[i].size();j++){
//             t|=vv[i][j];
//         }

//         if(t==c) ans++;
//         else ans+=vv[i].size()-1;
//     }

//     cout<<ans<<endl;
// }

// int32_t main() {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin>>T;

//     while(T--){
//         solve();
//     }
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

    int n;
    cin>>n;

    vector<int> a(n);

    map<int,int> mp;

    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    int mask=(1LL<<31)-1;

    int ans=0;

    for(auto p:mp){
        int x = p.first;
        int f = p.second;

        int y=mask^x;

        ans=max(ans,max(f,mp[y]));
    }

    cout<<ans<<endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--){
        solve();
    }
}