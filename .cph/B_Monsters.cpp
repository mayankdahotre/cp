// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> ans(n);
//     while(true){
//         int m=0;
//         for(int i=0; i<n; i++){
//             if(v[m]<v[i]) m=i;
//         }
//         v[m] = max(0LL,v[m]-k);
//         if(v[m]==0) ans.push_back(m+1);
//         if(ans.size()==n) break;
//     }
    
//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
//     cout<<endl;
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
//     int n, k;
//     cin >> n >> k;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     vector<bool> done(n, false);
//     vector<int> ans;

//     while(true) {
//         int m = -1;
//         for(int i = 0; i < n; i++) {
//             if(!done[i] && (m == -1 || v[i] > v[m])) {
//                 m = i;
//             }
//         }

//         if(m == -1) break; 

//         v[m] = max(0LL, v[m] - k);
//         if(v[m] == 0) done[m] = true, ans.push_back(m + 1);
//     }

//     for(auto x : ans) cout << x << " ";
//     cout << '\n';
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
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> timeToDie;  // (turns_needed, index)
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int turns = (a + k - 1) / k;
        timeToDie.push_back({turns, i});  // index 0-based
    }

    // Sort by (turns_needed, index)
    sort(timeToDie.begin(), timeToDie.end());

    for(auto [_, idx] : timeToDie) {
        cout << idx + 1 << " ";  // Output 1-based index
    }
    cout << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) solve();

    return 0;
}
