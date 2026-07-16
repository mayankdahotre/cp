// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // void solve() {
// //     int n, k, p, m;
// //     cin>>n>>k>>p>>m;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];
// //     p--;
// //     k--;

// //     int ans = 0;

// //     for(int t=0; t<max(0LL,p-k); t++){
// //         if(!m) break;
// //         int mni = min_element(v.begin(), v.begin()+k) - v.begin();
// //         int mn = v[mni];
// //         m-=mn;
// //         ans++;
// //         v.erase(v.begin()+mni);
// //         v.push_back(mn);
// //     }

// //     while(true){
// //         for(int t=0; t<n-k; t++){
// //             if(!m) break;
// //             int mni = min_element(v.begin(), v.begin()+k) - v.begin();
// //             int mn = v[mni];
// //             m-=mn;
// //             ans++;
// //             v.erase(v.begin()+mni);
// //             v.push_back(mn);
// //         }

// //         if(!m) break;
// //         int val = v[k];
// //         m-=val;
// //         ans++;
// //         v.erase(v.begin()+k);
// //         v.push_back(val);
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
//     int n, k, p, m;
//     cin>>n>>k>>p>>m;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];
//     p--;
//     k--;

//     int ans = 0;

//     for(int t=0; t<max(0LL,p-k); t++){
//         if(m<=0) break; // fix
//         int mni = min_element(v.begin(), v.begin()+k) - v.begin(); // fix
//         int mn = v[mni];
//         if(m < mn) break; // fix
//         m-=mn;
//         ans++;
//         v.erase(v.begin()+mni);
//         v.push_back(mn);
//     }

    // if(m>0){ // fix
    //     int val = v[k];
    //     if(m >= val){ // fix
    //         m-=val;
    //         ans++;
    //         v.erase(v.begin()+k);
    //         v.push_back(val);
    //     }
    // }

//     while(m>0){ // fix
//         for(int t=0; t<n-k; t++){ // fix
//             if(m<=0) break; // fix
//             int mni = min_element(v.begin(), v.begin()+k) - v.begin(); // fix
//             int mn = v[mni];
//             if(m < mn) break; // fix
//             m-=mn;
//             // ans++;
//             v.erase(v.begin()+mni);
//             v.push_back(mn);
//         }

//         if(m<=0) break; // fix
//         int val = v[k];
//         if(m < val) break; // fix
//         m-=val;
//         ans++;
//         v.erase(v.begin()+k);
//         v.push_back(val);
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
    int n, k, p, m;
    cin>>n>>k>>p>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    p--;
    k--;

    int ans = 0;

    for(int t=0; t<max(0LL,p-k); t++){
        if(m<=0) break; // fix
        int mni = min_element(v.begin(), v.begin()+k+1) - v.begin(); // fix
        int mn = v[mni];
        if(m < mn) break; // fix
        m-=mn;
        ans++;
        v.erase(v.begin()+mni);
        v.push_back(mn);
    }

    if(m>0){ // fix
        int val = v[k];
        if(m >= val){ // fix
            m-=val;
            ans++;
            v.erase(v.begin()+k);
            v.push_back(val);
        }
    }

    while(true){
        for(int t=0; t<n-k-1; t++){ // fix
            if(m<=0) break; // fix
            int mni = min_element(v.begin(), v.begin()+k+1) - v.begin(); // fix
            int mn = v[mni];
            if(m < mn) break; // fix
            m-=mn;
            ans++; // fix
            v.erase(v.begin()+mni);
            v.push_back(mn);
        }

        if(m<=0) break; // fix
        int val = v[k];
        if(m < val) break; // fix
        m-=val;
        ans++;
        v.erase(v.begin()+k);
        v.push_back(val);
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