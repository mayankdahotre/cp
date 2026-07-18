// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int ans=0;

//     vector<vector<int>> f(n, vector<int>(n,0));
//     for(int i=0; i<n; i++){
//         f[i]=f[i-1];
//         f[i][v[i]]++;
//     }

//     set<int> prev, cur;
//     int x=0, y=1;
//     for(int i=0; i<n; i++){
//         if(x==0 && i!=0){
//             prev=cur;
//             cur.insert(v[i]);
//             x=prev.size();
//             y++;
//         }
//         else{
//             if(prev.find(v[i])!=prev.end()){
//                 x--;
//                 prev.erase(v[i]);
//             }
//             cur.insert(v[i]);
//         }
//     }

//     cout<<y<<endl;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    // Minimal Change 1: Track total frequency in 1D array instead of NxN matrix to prevent MLE
    vector<int> total_freq(n + 1, 0); 
    for(int i=0; i<n; i++) {
        cin>>v[i];
        total_freq[v[i]]++;
    }

    int ans=0;

    set<int> prev, cur;
    int x=0, y=1;
    for(int i=0; i<n; i++){
        // Minimal Change 2: Decrement remaining count of the element as we see it
        total_freq[v[i]]--; 

        if(x==0 && i!=0){
            prev=cur;
            cur.clear(); // Minimal Change 3: Clear current segment for the new block
            cur.insert(v[i]);
            x=prev.size();
            y++;
        }
        
        // Minimal Change 4: An element can only "match" out of prev if it still exists in the suffix
        if(prev.find(v[i])!=prev.end() && total_freq[v[i]] == 0){
            x--;
            prev.erase(v[i]);
        }
        cur.insert(v[i]);
    }

    cout<<y<<endl;
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