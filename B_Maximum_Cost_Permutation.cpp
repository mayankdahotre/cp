// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int l=-1, r=-1;
//     for(int i=0; i<n; i++){
//         if(v[i]==0){
//             if(l==-1) l=i;
//             r=i;
//         }
//     }

//     int l2=n, r2=-1;
//     for(int i=0; i<=l; i++){
//         if(v[i]!=i+1){
//             l2=i;
//             break;
//         }
//     }

//     for(int i=n-1; i>=r; i--){
//         if(v[i]!=i+1){
//             r2=i;
//             break;
//         }
//     }

//     if(l2==n || r2==-1) cout<<max(r2,l)-min(l2,l)<<endl;
//     else cout<<max(r2,l)-min(l2,l)+1<<endl;
    
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

    set<int> miss;
    for(int i=0; i<n; i++) miss.insert(v[i]);

    int lo=-1, hi=-1;
    for(int i=0; i<n; i++){
        if(miss.find(i+1)==miss.end()){
            if(lo==-1) lo=i+1;
            hi=i+1;
        }
    }

    for(int i=0; i<n; i++){
        if(v[i])
    }
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