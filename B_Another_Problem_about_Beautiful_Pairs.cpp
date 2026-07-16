// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // void solve() {
// //     int n;
// //     cin>>n;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];

// //     int ans=0;
// //     for(int i=0; i<n; i++){
// //         for(int j=i+1; j<n; j++){
// //             if(v[i]*v[j]==j-i) ans++;
// //         }
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
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+v[i]; j<n; j+=v[i]){
//             if(v[i]*v[j]==j-i) ans++;
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int ans = 0;
    int SQ = 500;

    for(int i=0;i<n;i++){
        if(v[i] >= SQ){
            for(int j=1; i + v[i]*j < n; j++){
                if(v[i + v[i]*j] == j) ans++;
            }
            for(int j=1; i - v[i]*j >= 0; j++){
                if(v[i - v[i]*j] == j) ans++;
            }
        }
        else{
            for(int j=1; j < SQ && i + v[i]*j < n; j++){
                if(v[i + v[i]*j] == j) ans++;
            }
        }
    }

    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}