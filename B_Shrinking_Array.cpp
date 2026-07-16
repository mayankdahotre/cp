#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(n<2 || (n==2 && abs(v[0]-v[1])>1)){
        cout<<-1<<endl;
        return;
    }

    
    for(int i=0; i<n-1; i++){
        if(abs(v[i]-v[i+1])<=1){
            cout<<0<<endl;
            return;
        }
    }

    for(int i=1; i<n-1; i++){
        if((v[i]<=v[i+1] && v[i]<=v[i-1]) || (v[i]>=v[i+1] && v[i]>=v[i-1])){
            cout<<1<<endl;
            return;
        }
    }

    cout<<-1<<endl;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     // already beautiful
//     for(int i = 0; i < n-1; i++) {
//         if(abs(v[i] - v[i+1]) <= 1) {
//             cout << 0 << endl;
//             return;
//         }
//     }

//     // try one merge
//     for(int i = 0; i < n; i++) {
//         int L = min(v[i], v[i+1]);
//         int R = max(v[i], v[i+1]);

//         // check left neighbor
//         if(i-1 >= 0) {
//             int l = v[i-1] - 1;
//             int r = v[i-1] + 1;

//             if(max(L, l) <= min(R, r)) {
//                 cout << 1 << endl;
//                 return;
//             }
//         }

//         // check right neighbor
//         if(i+2 < n) {
//             int l = v[i+2] - 1;
//             int r = v[i+2] + 1;

//             if(max(L, l) <= min(R, r)) {
//                 cout << 1 << endl;
//                 return;
//             }
//         }
//     }

//     cout << -1 << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }