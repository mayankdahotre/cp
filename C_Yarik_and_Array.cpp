// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans1=0;
//     int cur1=0;
//     bool odd = false;
//     for(int i=0; i<n; i++){
//         if(v[i]%2){
//             ans1=v[i];
//             cur1=v[i];
//             odd=true;
//             break;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(v[i]%2){
//             if(cur1==0) cur1=v[i];
//             else{
//                 cur1=max(cur1+v[i], v[i]);
//                 ans1=max(cur1, ans1);
//             }
//         } 
//         else cur1=0;
//     }


//     int ans2=0;
//     int cur2=0;
//     bool even=false;
//     for(int i=0; i<n; i++){
//         if(v[i]%2==0){
//             ans2=v[i];
//             cur2=v[i];
//             even=true;
//             break;
//         }
//     }

//     for(int i=0; i<n; i++){
//         if(v[i]%2==0){
//             if(cur2==0) cur2=v[i];
//             else{
//                 cur2=max(cur2+v[i], v[i]);
//                 ans2=max(cur2, ans2);
//             }
//         }
//         else cur2=0;
//     }

//     if(odd && even) cout<<max(ans1, ans2)<<endl;
//     if(odd && !even) cout<<ans1<<endl;
//     if(even && !odd) cout<<ans2<<endl;

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

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans=v[0];
//     int sum=v[0];
//     int cur=v[0];
//     int p=v[0]%2;

//     for(int i=1; i<n; i++){
//         if(v[i]%2!=p){
//             cur=max(v[i], cur+v[i]);
//             sum=max(sum, cur);
//         }
//         else{
//             ans=max(ans, sum);
//             cur=v[i];
//             sum=v[i];
//         }
//         p=v[i]%2;
//     }
//     ans=max(sum, ans);

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

    int ans = v[0];
    int cur = v[0];
    int p = v[0];

    for(int i=1; i<n; i++){
        if(abs(v[i]%2) != abs(p%2)) cur = max(v[i], cur + v[i]);
        else cur = v[i];
        
        p=v[i];
        ans = max(ans, cur);   
    }

    cout<<ans<<endl;
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